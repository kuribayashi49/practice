#include <fstream>
#include <iostream>
#include <iomanip>
#include "header.h"

using namespace std;

int main() {
    ifstream inFile("word.txt");
    ofstream outFile("output.txt");

    Compress Data1;
    Data1.CompressData();
    Data1.show();

    inFile.close();
    outFile.close();

    return 0;
}
