// FileRead.cpp
#include "FileRead.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

FileRead::FileRead(const string& FileName) {
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
}

const set<double>& FileRead::getUniqueValues() const {
    return uniqueValues;
}
