#include <iostream>
#include <fstream>
#include <FileRead.h>
#include <string>

using namespace std;

string FileName = "cube.stl";

FileRead::FileRead(const std::string& FileName){
    string data;
    ifstream in(FileName);
    if (in.is_open()) {
        while (getline(in, data)) {
            cout << data << endl;
        }
    }
}
FileRead::~FileRead(){};
