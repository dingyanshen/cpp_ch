//stringIO2.cpp
#include <string>
using std::string;

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
    string s1, s2;

    cin >> s1 >> s2; // [cin >> s1 == cin] read first input into s1, second into s2
    cout << s1 << s2 << endl; // write both strings
    while(1);
    return 0;
}
