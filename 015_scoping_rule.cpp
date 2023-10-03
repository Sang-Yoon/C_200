#include <iostream>

using namespace std;

int x = 10; // Global variable x

int Func1()
{
    int y = x + 10;
    return y;
}

int Func2()
{
    int x = 100; // Local variable x
    return x;
}

int main()
{
    cout << "y = " << Func1() << endl;
    cout << "x = " << Func2() << endl;
    cout << "x = " << x << endl;

    return 0;
}