#include <iostream>

using namespace std;

void Minus(const int x, const int y) // to avoid changing the value of x and y, use const
{
    cout << "x - y = " << x - y << endl;
}

int Plus(const int x, const int y)
{
    return x + y;
}

int main()
{
    Minus(10, 5);

    cout << "x + y = " << Plus(2, 6) << endl;

    return 0;
}