#include <iostream>
using namespace std;


class Example {
    char a;    // 1 byte
    int b;     // 4 bytes
    char c;    // 1 byte
    // expected 6
};

int main() {
    cout << "Size of Example class: " << sizeof(Example) << " bytes" << endl;  // 12 
    return 0;
}