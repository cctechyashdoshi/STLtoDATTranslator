#include <Point.h>

using namespace std;

class Point {
    public:
        double x, y, z;
        Point(double x, double y, double z) : x(x), y(y), z(z) {}
        ~Point() {}
};
