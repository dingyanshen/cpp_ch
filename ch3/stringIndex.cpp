//stringIndex.cpp
//字符改大写
#include <string>
using std::string;
#include <cctype>
using std::toupper;
#include <iostream>
using std::cout; using std::endl;
int main()
{
    string s("some string");
    if(!s.empty())
        cout<<s[0]<<endl;//s
    if(!s.empty())
        s[0]=toupper(s[0]);
    cout<<s<<endl;//Some string
    return 0;
}
