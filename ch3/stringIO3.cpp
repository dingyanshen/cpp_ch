//stringIO3.cpp
#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

int main()
{
    string word;
    while (cin >> word)       // read until end-of-file. ctrl+d
        cout << word << endl; // write each word followed by a new line
    return 0;
}
