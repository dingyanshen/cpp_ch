//q3_20.cpp
//读入一组整数并把他们存入一个vector对象，将每对相邻整数的和输出出来。改写你的程序，这次要求先输出第一个
//和最后一个元素的和，接着输出第二个和倒数第二个元素的和，以此类推。


#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<int> ivec;
    int i;
    while (cin >> i)
    {
        ivec.push_back(i);
    }

    for (int i = 0; i < ivec.size() - 1; ++i)
    {
        cout << ivec[i] + ivec[i + 1] << endl;
    }

    //---------------------------------
    cout << "---------------------------------" << endl;

    int m = 0;
    int n = ivec.size() - 1;
    while (m < n)
    {
        cout << ivec[m] + ivec[n] << endl;
        ++m;
        --n;
    }
    return 0;
}


