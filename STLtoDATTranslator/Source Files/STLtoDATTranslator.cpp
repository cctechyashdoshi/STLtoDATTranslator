#include "FileRead.h"
#include<fstream>
#include "Triangulation.h"
#include "FileWrite.h"

using namespace std;

int main() {
    FileRead reader;
    string input =reader.read();

    Triangulation triangulation;
    triangulation.processString(input);

    vector<Triangle> triangles = triangulation.createTriangles(input);

    FileWrite writer;
    writer.writeFile("output.dat", triangles, triangulation.uniqueVertices());

    return 0;
}



