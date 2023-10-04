#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    /*
    8 bit = 1 byte = 2^8 = 256
    */

   bitset<8> bit1; // size is 8 bit
   bit1.reset(); // 0000 0000
   bit1 = 127; // 0111 1111

   bitset<8> bit2;
   bit2.reset(); // 0000 0000
   bit2 = 0x20; // 32 = 0010 0000
   /*
   hexadecimal number
   0x means hexadecimal number
   0x00 = 0
   0x01 = 1
   0x02 = 2
   0x03 = 3
   0x04 = 4
   0x05 = 5
   0x06 = 6
   0x07 = 7
   0x08 = 8
   0x09 = 9
   0x0A = 10
   0x0B = 11
   0x0C = 12
   0x0D = 13
   0x0E = 14
   0x0F = 15
   0x10 = 16
   0x11 = 17
   ...
   */

   bitset<8> bit3 = bit1 & bit2;
   bitset<8> bit4 = bit1 | bit2;
   bitset<8> bit5 = bit1 ^ bit2;
   bitset<8> bit6 = ~bit1; // reverse the bit 0 to 1 and 1 to 0 (flip the bit) -> 1000 0000
   bitset<8> bit7 = bit2 << 1; // shift the bit 0010 0000 to the left by 1 -> 0100 0000 = 64
   bitset<8> bit8 = bit2 >> 1; // shift the bit 0010 0000 to the right by 1 -> 0001 0000 = 16

   cout << "bit1 & bit2 : " << bit3 << ", " << bit3.to_ulong() << endl; // to_ulong is to convert the bit to unsigned long
   cout << "bit1 | bit2 : " << bit4 << ", " << bit4.to_ulong() << endl;
   cout << "bit1 ^ bit2 : " << bit5 << ", " << bit5.to_ulong() << endl;
   cout << "~bit1 : " << bit6 << ", " << bit6.to_ulong() << endl;
   cout << "bit1 << 1 : " << bit7 << ", " << bit7.to_ulong() << endl;
   cout << "bit2 >> 1 : " << bit8 << ", " << bit8.to_ulong() << endl;
   
   return 0;
}