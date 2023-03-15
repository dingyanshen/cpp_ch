//exp1.cpp
#include <iostream>
using std::cout; using std::endl;

int main()
{
    // 不同的括号组合导致不同的结果
    cout << (6 + 3) * (4 / 2 + 2) << endl;     // prints 36
    cout << ((6 + 3) * 4) / 2 + 2 << endl;     // prints 20
    cout << 6 + 3 * 4 / (2 + 2) << endl;       // prints 9

    return 0;
}
