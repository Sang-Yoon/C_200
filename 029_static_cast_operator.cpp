#include <iostream>

using namespace std;

int main()
{
    int x = 2;
    double y = 4.4;

    int i = static_cast<int>(y / x); // C++-style casting, recommended
    int j = (int)y / x; // C-style casting, not recommended
    double k = y / x;

    cout << "4.4 / 2 = (static_cast<int>) " << i << endl;
    cout << "4.4 / 2 = (int) " << j << endl;
    cout << "4.4 / 2 = " << k << endl;

    return 0;
}