#include <iostream>
#include <iomanip>
#include "FileRead.h"
#include <string>

using namespace std;

int main() {
    string FileName = "cube.stl";
    FileRead fr(FileName);

    const auto& uniqueValues = fr.getUniqueValues();
    cout << fixed << setprecision(6); 
    for (const auto& value : uniqueValues) {
        cout << value << endl;
    }

    return 0;
}