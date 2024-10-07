#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <set>
#include <iomanip>
#include "FileRead.h"

using namespace std;

FileRead::FileRead(const string& FileName) {
    set<double> uniqueValues;
    ifstream myFile(FileName);
    if (myFile.is_open()) {
        string line;
        while (getline(myFile, line)) {
            if (line.find("vertex") != string::npos) {
                size_t pos = line.find("vertex");
                istringstream iss(line.substr(pos + 7));
                double x, y, z;
                if (iss >> x >> y >> z) {
                    uniqueValues.insert(x);
                    uniqueValues.insert(y);
                    uniqueValues.insert(z);
                }
            }
        }
        myFile.close();
    }
    else {
        cerr << "Unable to open file: " << FileName << endl;
    }

    cout << fixed << setprecision(6);
    for (const auto& value : uniqueValues) {
        cout << value << " ";
    }
    cout << endl;
}

FileRead::~FileRead() {}
