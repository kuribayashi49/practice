#include <fstream>
#include <iostream>
#include <iomanip>
#include "header.h"
using namespace std;

void Compress::CompressData(){
    const int num = 10;
    string word[num];
    string search[num] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    int AfterCompressed[num];

    for (int i=0; i<num; i++){
        inFile >> word[i];

        //searching the same word. If it could match, it changes from word to number
        for (int j=0; j<num; j++){ 
            if ( word[i] == search[j])
                AfterCompressed[i] = j+1;


        } 
    }

}

void Compress::show(){
    const int num = 10;
    string word[num];
    int AfterCompressed[num];

    for (int k=0; k<num; k++){
        outFile << word[k] << setw(5) << AfterCompressed[k] << endl;
    }
}