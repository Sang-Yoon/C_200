#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int y = 2;
    int z = 0;

    z = x > y ? x : y; // '?' is the if, ':' is the else
    // Use ternery operator only when the if-else is simple
    // Otherwise, use if-else statement to make the code more readable

    cout << "z = " << z << endl;

    return 0;
}