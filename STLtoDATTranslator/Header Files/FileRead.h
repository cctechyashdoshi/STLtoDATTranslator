// FileRead.h
#ifndef FILEREAD_H
#define FILEREAD_H

#include <string>
#include <set>

using namespace std;

class FileRead {
public:
    FileRead(const string& FileName);
    const set<double>& getUniqueValues() const;
    set<double> uniqueValues;
};

#endif // FILEREAD_H
