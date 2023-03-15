#include <algorithm>
using std::equal;

#include <list>
using std::list;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <iostream>
using std::cout; using std::endl;

#ifndef LIST_INIT
#include <iterator>
using std::begin; using std::end;
#endif

int main()
{
#ifdef LIST_INIT
    list<const char *> roster1;
    vector<string> roster2;
    roster2 = {"hello", "so long", "tata"};
    roster1 = {"hello", "so long"};
#else
    const char* temp1[] = {"hello", "so long"};
    string temp2[] = {"hello", "so long", "tata"};
    list<const char *> roster1(begin(temp1), end(temp1));
    vector<string> roster2(begin(temp2), end(temp2));
#endif

    auto b =
    // roster2 should have at least as many elements as roster1
    equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());

    (b) ? cout << "true" : cout << "false";
    cout << endl;

    return 0;
}
