//stringCompare.cpp
#include <string>
using std::string;
#include <iostream>
using std::cout; using std::endl;
int main()
{
    string str = "Hello";
    string phrase = "Hello World";
    string slang  = "Hiya";
    if (str < phrase) cout << "Hello < Hello World" << endl;
    if (slang > str) cout << "Hiya > Hello" << endl;
    if (slang > phrase) cout << "Hiya > Hello World" << endl;
    while(1);
    return 0;
}
//Hello < Hello World
//Hiya > Hello
//Hiya > Hello World

