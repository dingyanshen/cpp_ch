#include <vector>
using std::vector;

#include<iostream>
using std::cout; using std::endl;

#ifndef LIST_INIT
#include <iterator>
using std::begin; using std::end;
#endif

int main()
{
#ifdef LIST_INIT
    vector<int> vec = {0,1,2,3,4,5,6,7,8,9};
#else
    int temp[] = {0,1,2,3,4,5,6,7,8,9};
    vector<int> vec(begin(temp), end(temp));
#endif
    // reverse iterator of vector from back to front
    for (auto r_iter = vec.crbegin(); // binds r_iter to the last element
              r_iter != vec.crend();  // one before first element
              ++r_iter)          // decrements the iterator one element
        cout << *r_iter << endl; // prints 9, 8, 7, . . . 0

    return 0;
}
