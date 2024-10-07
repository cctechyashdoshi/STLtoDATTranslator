#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <set>
#include "FileRead.h"

FileRead::FileRead(const std::string& FileName) {
    std::string data;
    std::ifstream myFile(FileName);
    if (myFile.is_open()) {
        std::string line;
        while (std::getline(myFile, line)) {
            if (line.find("vertex") != std::string::npos) {
                size_t pos = line.find("vertex");
                std::istringstream iss(line.substr(pos + 7));
                double x, y, z;
                if (iss >> x >> y >> z) {
                    std::cout << x << " " << y << " " << z << std::endl;
                }
            }
        }
        myFile.close();
    }
    else {
        std::cerr << "Unable to open file: " << FileName << std::endl;
    }
}

FileRead::~FileRead() {}
