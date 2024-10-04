#include <iostream>
#include <fstream>
#include <FileRead.h>
#include <string>

using namespace std;

string FileName = "cube.stl";

FileRead::FileRead(const std::string& FileName){
    string data;
    ifstream myFile(FileName);
    if (myFile.is_open()) {
    string line;
    while (getline(myFile, line)) {
        if (line.find("vertex") != string::npos) {
            int pos = line.find("vertex");
            data += line.substr(pos + 7);
        }
    }
    cout << data;
    myFile.close();
}
}
FileRead::~FileRead(){};
