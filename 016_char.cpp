#include <iostream>

using namespace std;

int main()
{
    char ch1 = 'c';
    char ch2 = 200;

    unsigned char ch3 = 'c';
    unsigned char ch4 = 200;

    // %c is for char, %d is for int
    printf("char ch1 = %c, %d\n", ch1, ch1); // c, 99
    printf("char ch2 = %c, %d\n", ch2, ch2); // ?, -56
    printf("char ch3 = %c, %d\n", ch3, ch3); // c, 99
    printf("char ch4 = %c, %d\n", ch4, ch4); // ?, 200
    // ascii code for 'c' is 99
    // range of char is -128 to 127
    // range of unsigned char is 0 to 255

    return 0;
}