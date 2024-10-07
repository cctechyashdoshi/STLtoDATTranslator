// FileRead.h
#ifndef FILEREAD_H
#define FILEREAD_H

#include <string>
#include <vector>
#include "Point.h"

using namespace std;

class FileRead {
public:
    vector<Point> points;
    FileRead(const string& FileName);
    const vector<Point>& getPoints() const;
};

#endif // FILEREAD_H