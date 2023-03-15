//stringIndex2.cpp
//首个单词字符改大写
#include <string>
using std::string;
#include <cctype>
using std::toupper;
#include <iostream>
using std::cout; using std::endl;
int main()
{
    string s("some string");
    for(decltype(s.size()) index = 0;
        index != s.size() && !isspace(s[index]);++index) {
        s[index] = toupper(s[index]);
    }
    cout << s << endl;//SOME string
    return 0;
}

