#include <iostream>

using namespace std;

class Temp { // total: 5 bytes
    int no; // 4 bytes
    bool is_on; // 1 byte
};

int main()
{
    cout << "Size of char: " << sizeof('p') << endl; // 1 byte = 8 bits = 2^8 = 256
    cout << "Size of int: " << sizeof(10) << endl; // 4 bytes = 32 bits = 2^32 = 4,294,967,296
    cout << "Size of double: " << sizeof(10.0) << endl; // 8 bytes = 64 bits = 2^64 = 1.8446744e+19
    cout << "Size of class: " << sizeof(Temp) << endl; // Data bus moves 4 bytes at a time and the class is 5 bytes, so it moves 8 bytes

    return 0;
}