#include <iostream>

using namespace std;

int main()
{
    string str = "The Jin state was formed in southern Korea by the 3rd century BC";

    char searchChar = 'a'; // each character in the 'string' is a char

    int size = str.size();
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (str[i] == searchChar)
        {
            count++;
        }
    }

    cout << "The number of " << searchChar << " in the string is " << count << endl;

    return 0;
}