//stringFor3.cpp
//字符串改大写
#include <string>
using std::string;
#include <cctype>
using std::isupper; using std::toupper;
#include <iostream>
using std::cout; using std::endl;
int main()
{
    string s("Hello World!!!");
    // convert s to uppercase
    string orig = s;
    for (auto &c : s)   // for every char in s (note: c is a reference)
        // c is a reference, so this assignment changes the char in s
        c = toupper(c);
    cout << s << endl;
    return 0;
}
//HELLO WORLD!!!
