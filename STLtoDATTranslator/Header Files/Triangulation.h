#pragma once
#include<vector>
#include<unordered_map>
#include<sstream>
#include "Triangle.h"

using namespace std;

class Triangulation {
    vector<double> uniqueVertices;
    unordered_map<double, int> vertexIndexMap;  
public:
    std::vector<double> getUniqueVertices() {
        return uniqueVertices;
    }
    void processString(const std::string& data);
    vector<Triangle> createTriangles(const std::string& data); 
};



