#include <iostream>
#include <FileRead.h>
#include <string>

using namespace std;

int main()
{   
    string FileName = "cube.stl";
    FileRead::FileRead(FileName);

    return 0;
}