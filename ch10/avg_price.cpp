#include <iterator>
using std::istream_iterator; using std::ostream_iterator;

#include <iostream>
using std::cin; using std::cout;

#include "Sales_item.h"

int main()
{
    // iterators that can read and write Sales_items
    istream_iterator<Sales_item> item_iter(cin), eof;
    ostream_iterator<Sales_item> out_iter(cout, "\n");

    // store the first transaction in sum and read the next record
    Sales_item sum = *item_iter++;

    while (item_iter != eof) {
        // if the current transaction (which is in item_iter)
        // has the same ISBN
        if (item_iter->isbn() == sum.isbn())
            sum += *item_iter++; // add it to sum
                                 // and read the next transaction
        else {
            out_iter = sum;      // write the current sum
            sum = *item_iter++;  // read the next transaction
        }
    }
    out_iter = sum;  // remember to print the last set of records

    return 0;
}
