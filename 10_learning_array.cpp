#include <iostream>

using namespace std;

int main()
{
    const int kArraySize = 3;

    // 1) declare an array of size 3
    int founding[kArraySize];
    founding[0] = 918;
    founding[1] = 1392;
    founding[2] = 1948;

    // 2) declare an array of size 3 and initialize it
    int founding[kArraySize] = {918, 1392, 1948};

    cout << "The year of the founding of Goryeo is " << founding[0] << endl;
    cout << "The year of the founding of Joseon is " << founding[1] << endl;
    cout << "The year of the founding of the Republic of Korea is " << founding[2] << endl;

    return 0;

}