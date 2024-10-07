#include "FileRead.h"
#include <iostream>
#include <fstream>
#include <sstream>

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
                    points.emplace_back(x, y, z);
                }
            }
        }
        myFile.close();
    } else {
        cerr << "Unable to open file: " << FileName << endl;
    }
}

const vector<Point>& FileRead::getPoints() const {
    return points;
}