#pragma once

using namespace std;

class Point {
    public:
        int x, y, z;
        Point(int x, int y, int z) : x(x), y(y), z(z) {}
        ~Point() {}
};
