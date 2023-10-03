#include <iostream>

using namespace std;

int main()
{
    /*
    '=' is the assignment operator and it is used to assign a value to a variable.
    L-value is the left side of the assignment operator and it can't be a constant.
    */
    int x = 1;
    int y = 9;

    int z = x + y;

    double i = 1.2;
    double j = 2.3;

    double k = i + j;

    cout << "x + y = " << z << endl;
    cout << "i + j = " << k << endl;

    return 0;
}