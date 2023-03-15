#include <algorithm>
using std::find;

#include <iterator>
using std::begin; using std::end;

#include <vector>
using std::vector;

#include <list>
using std::list;

#include <string>
using std::string;

#include <iostream>
using std::cout; using std::endl;

int main()
{
    int ia[] = {27, 210, 12, 47, 109, 83};
    int val = 83;
    int* result = find(begin(ia), end(ia), val);
    cout << "The value " << val
         << (result == end(ia)
               ? " is not present" : " is present") << endl;

    // search starting from ia[1] up to but not including ia[4]
    result = find(ia + 1, ia + 4, val);

    // initialize the vector with some values
#ifdef LIST_INIT
    vector<int> vec = {27, 210, 12, 47, 109, 83};
#else
    int temp[] = {27, 210, 12, 47, 109, 83};
    vector<int> vec(begin(temp), end(temp));
#endif
    val = 42; // value we'll look for

    // result2 will denote the element we want if it's in vec,
    // or vec.cend() if not
    auto result2 = find(vec.cbegin(), vec.cend(), val);

    // report the result
    cout << "The value " << val
         << (result2 == vec.cend()
               ? " is not present" : " is present") << endl;

    // now use find to look in a list of strings
#ifdef LIST_INIT
    list<string> lst = {"val1", "val2", "val3"};
#else
    string temp2[] = {"val1", "val2", "val3"};
    list<string> lst(begin(temp2), end(temp2));
#endif

    string sval = "a value";  // value we'll look for
    // this call to find looks through string elements in a list
    auto result3 = find(lst.cbegin(), lst.cend(), sval);
    cout << "The value " << sval
         << (result3 == lst.cend()
               ? " is not present" : " is present") << endl;

    return 0;
}

