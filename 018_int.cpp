#include <iostream>

using namespace std;

int main()
{
    int positive = 100;
    int negative = -200;
    int ascii_value = 'A';
    int double_value = 3.14;
    // int string_value = "Hello"; // error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]

    cout << "Positive value: " << positive << endl;
    cout << "Negative value: " << negative << endl;
    cout << "ASCII value: " << ascii_value << endl;
    cout << "Double value: " << double_value << endl;
    // cout << "String value: " << string_value << endl;

    return 0;
}