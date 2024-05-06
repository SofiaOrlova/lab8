#include "testlib.h"
#include <iostream>
#include <fstream> 
using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1); 
    int numCases = 20;
    ofstream outputFile("input.txt");
    if (!outputFile.is_open()) {
        cerr << "Unable to open file" << endl;
        return 1;
    }

    outputFile << numCases << endl;

    for (int i = 0; i < numCases; ++i) {
        int n = rnd.next(1, 100000); 
        outputFile << n << endl;
    }

    outputFile.close();
    cout << "Generator created" << endl;

    return 0;
}
