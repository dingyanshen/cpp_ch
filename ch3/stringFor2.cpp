//stringFor2.cpp
//统计标点符号
#include <string>
#include <cctype>
#include <iostream>
using namespace std;

int main()
{
    string s("Hello,world!");
    // punct_cnt has the same type that s.size returns
    decltype(s.size()) punct_cnt = 0;

    // count the number of punctuation characters in s
    for (auto c : s)         // for every char in s 遍历每个字符
        if (ispunct(c))      // if the character is punctuation
            ++punct_cnt;     // increment the punctuation counter

    cout << punct_cnt
         << " punctuation characters in " << s << endl;

    return 0;
}
//3 punctuation characters in Hello World!!!
