#include <iostream>
#include <vector> // <> is used for basic libraries
// #include "014_include.h" // "" is used for user-defined libraries

using namespace std;

int main()
{
    vector<int> exam;
    exam.push_back(10);
    exam.push_back(20);
    exam.push_back(30);

    for (int i = 0, size = exam.size(); i < size; i++)
    {
        cout << "Value of vector: " << exam.at(i) << endl;
    }

    return 0;
}