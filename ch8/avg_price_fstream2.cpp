//avg_price_fstream2.cpp
#include <fstream>
#include <iostream>
#include "Sales_data.h"
using std::ifstream; using std::cout; using std::endl; using std::cerr;

int main(int argc, char **argv)
{
    ifstream input(argv[1]);
    Sales_data total;
    if (read(input, total))
    {
        Sales_data trans;
        while (read(input, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
    }

    return 0;
}
/*
g++ avg_price_fstream2.cpp Sales_data.cpp
./a.out data.in
0-201-78345-X 5 110 22

cat data.in
0-201-78345-X 3 20.00
0-201-78345-X 2 25.00
*/
