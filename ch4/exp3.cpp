//exp3.cpp
#include <iostream>
using std::cout; using std::endl;
int main()
{
    int i = 1024;
    int k = -i; // i is -1024

    bool b = true;
    bool b2 = -b; // b2 is true!
    //bool类型不应该参与计算
    //b为true，提升为对应整数1，-b=-1
    //b2=-1≠0，所以b2仍为true
    cout << b << " " << b2 << " " << endl;
    return 0;
}

