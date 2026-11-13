#include <iostream>
#include <fstream>
#include <vector>
#include "BEmployee.h"
using namespace std;
int main() {
    ifstream file("bemployee.bin", ios::binary);
    BEmployee E;
    file.seekg(sizeof(E) * 3);
    //file.read(reinterpret_cast<char*>(&E), sizeof(E));
    E.read(file);
    cout << E << endl;
    file.seekg(-static_cast<streamoff>(sizeof(E)), ios::end);
    //file.read(reinterpret_cast<char*>(&E), sizeof(E));
    E.read(file);
    cout << E << endl;
    return 0;
} 