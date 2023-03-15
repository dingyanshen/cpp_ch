//fileIO.cpp
#include <iostream>
using std::cerr; using std::cout; using std::endl;

#include <fstream>
using std::ifstream;

#include <string>
using std::string;

#include <stdexcept>
using std::runtime_error;

void process(ifstream &is)
{
    string s;
    while (is >> s)
        cout << s << endl;
}

int main(int argc, char* argv[])
{
    // for each file passed to the program
    for (auto p = argv + 1; p != argv + argc; ++p) {
        ifstream input(*p);   // create input and open the file
        if (input) {          // if the file is ok, ``process'' this file
            process(input);
        } else
            cerr << "couldn't open: " + string(*p);
    } // input goes out of scope and is destroyed on each iteration

}
/*
g++ fileIO.cpp
./a.out data.in data.out
0-201-78345-X
3
20.00
0-201-78345-X
2
25.00
0-201-78345-X
5
110
22
*/
