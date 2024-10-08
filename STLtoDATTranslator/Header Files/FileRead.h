#pragma once

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
