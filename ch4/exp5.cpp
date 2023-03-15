//exp5.cpp
#include <iostream>
using std::cout; using std::endl;

int main()
{
    cout<<-30 * 3 + 21 / 5<<endl;  // -90+4 = -86
    cout<<-30 + 3 * 21 / 5<<endl;  // -30+63/5 = -30+12 = -18
    cout<<30 / 3 * 21 % 5<<endl;  // 10*21%5 = 210%5 = 0
    cout<<-30 / 3 * 21 % 4<<endl;  // -10*21%4 = -210%4 = -2

    short v1 = 32767;cout<< ++v1<<endl; // -32768
    unsigned v2 = 0; cout<<--v2<<endl;  // 4294967295
    unsigned short v3 = 65535; cout<<++v3<<endl;  // 0

    return 0;
}
