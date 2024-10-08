#include <iostream>
#include <iomanip>
#include "FileRead.h"
#include <string>

using namespace std;

int main() {
    string FileName = "cube.stl";
    FileRead fr(FileName);

    const auto& points = fr.getPoints();
    cout << fixed << setprecision(6); 
    for (const auto& point : points) {
        cout << point.x << " " << point.y << " " << point.z << endl;
    }

    return 0;
}

