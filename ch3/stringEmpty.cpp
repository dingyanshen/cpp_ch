//stringEmpty.cpp
#include <string>
#include <iostream>
using std::string;
using std::cin; using std::cout; using std::endl;
int main()
{
    string line;
    // 每次读入一行，遇到空行直接跳过
    while (getline(cin, line))
        if (!line.empty()) // 判断 非空串
            cout << line << endl;
    return 0;
}

