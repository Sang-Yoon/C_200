#include <iostream>
#include <string> // standard header file for string

using namespace std;

int main()
{
    string my_country = "Korea";
    string my_job = "Robotics Researcher";

    cout << "Country: " << my_country << endl;
    cout << "Job: " << my_job << endl;

    string my_info = my_country + ", " + my_job;

    cout << "My info: " << my_info << endl;

    return 0;
}