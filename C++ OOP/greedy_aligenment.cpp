#include <iostream>
using namespace std;


class ExampleGreedy {
    int b;    // 4 bytes
    char a;   // 1 byte
    char c;   // 1 byte
    // padding (2 bytes) might still be added for alignment purposes
    // expect 6 
};

int main() {
    cout << "Size of ExampleGreedy class: " << sizeof(ExampleGreedy) << " bytes" << endl; // 8
    return 0;
}