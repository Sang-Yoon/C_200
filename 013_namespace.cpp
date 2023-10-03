#include <iostream>

using namespace std;

namespace silla
{
    int year = 935;

    void CentralArea()
    {
        cout << "Gyeonsangdo" << endl;
    }
}

namespace baekjae
{
    int year = 660;

    void CentralArea()
    {
        cout << "Chungcheongdo" << endl;
    }
}

using namespace silla;
using namespace baekjae;

int main()
{
    cout << "Central area of Silla: ";
    silla::CentralArea();
    cout << "Year of destruction of Silla: " << silla::year << endl;
    cout << "Central area of Baekjae: ";
    baekjae::CentralArea();
    cout << "Year of destruction of Baekjae: " << baekjae::year << endl;

    return 0;
}