#include "read.h"
#include<fstream>
#include "triangulation.h"
#include "write.h"

using namespace std;

int main() {
    Read reader;
    string input =reader.read();

    Triangulation triangulation;
    triangulation.processString(input);

    vector<Triangle> triangles = triangulation.createTriangles(input);

    Write writer;
    writer.writeFile("output.dat", triangles, triangulation.uniqueVertices());

    return 0;
}



