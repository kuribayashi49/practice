#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

class Compress{
    public:
        void CompressData();
        void show();
    private:
        ifstream inFile;
        ofstream outFile;
};


