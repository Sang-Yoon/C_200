#include <iostream>

using namespace std;

int main()
{
    int number = 3;

    switch (number)
    {
        case 1:
            cout << "Number is 1" << endl;
            break; // break is required to exit the switch statement
        case 2:
            cout << "Number is 2" << endl;
            break;
        case 3:
            cout << "Number is 3" << endl;
            break;
        default: // default is recommended, but not necessary
            cout << "Number is not 1, 2, or 3" << endl;
            break;
    }

    return 0;
}