#include <iostream>
#include <string>

using namespace std;

typedef struct {
    short shdata;
    long dwData:4;
    char chData;
    int nData;
}Data_t;

int ByteSizeMain(int argc, char** argv) {

    Data_t test;
    cout << "Data_t size: " << sizeof(test) << endl;

    return 0;
}