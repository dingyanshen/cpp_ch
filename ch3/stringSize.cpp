//stringSize.cpp
#include <string>
using std::string; using std::getline;
#include <iostream>
using std::cin; using std::cout; using std::endl;
int main()
{
    string line;
    // read input a line at a time and print lines that are longer than 80 characters
    while (getline(cin, line))
        if (line.size() > 10) // line.size ���е��ַ����� �������ֽ�
            cout << line << endl;
    return 0;
}
