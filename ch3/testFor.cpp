//编写一段程序，读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分。

#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string s = "!!!hello world!!!";
    string result;

    for (auto x : s)
    {
        if (!ispunct(x))
        {
            result += x;
        }
    }

    cout << result << endl;
    return 0;
}


