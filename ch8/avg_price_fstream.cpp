//avg_price_fstream.cpp
#include <iostream>
#include <fstream>
using std::cerr; using std::cin; using std::cout; using std::endl;
using std::ifstream;using std::ofstream;

#include "Sales_data.h"

int main(int argc,char* argv[])
{
    ifstream input(argv[1]);
    ofstream output(argv[2]);
    Sales_data total;         // variable to hold the running sum
    if (read(input, total))  {  // read the first transaction
        Sales_data trans;     // variable to hold data for the next transaction
        while(read(input, trans)) {      // read the remaining transactions
            if (total.isbn() == trans.isbn())   // check the isbns
                total.combine(trans);  // update the running total
            else {
                print(output, total) << endl;  // print the results
                total = trans;               // process the next book
            }
        }
        print(output, total) << endl;          // print the last transaction
    } else {                                 // there was no input
        cerr << "No data?!" << endl;         // notify the user
    }

    return 0;
}

//g++ avg_price_fstream.cpp Sales_data.cpp
//./a.out data.in data.out
//cat data.out
//0-201-78345-X 5 110 22
//cat data.in
//0-201-78345-X 3 20.00
//0-201-78345-X 2 25.00

