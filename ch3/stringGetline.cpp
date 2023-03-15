//stringGetline.cpp

#include <string>
using std::string; using std::getline;

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
    string line;

    // read input a line at a time until end-of-file
    // line 中不包含换行符
    while (getline(cin, line))
        cout << line << endl;
    return 0;
}
