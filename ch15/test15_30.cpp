
//main:
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <fstream>
#include "Basket.h"
int main()
{
    Basket basket;

    for (unsigned i = 0; i != 10; ++i)
        basket.add_item(Bulk_quote("abc", 10, 10, 0.3));

    for (unsigned i = 0; i != 10; ++i)
        basket.add_item(Bulk_quote("def", 20, 20, 0.4));

    for (unsigned i = 0; i != 10; ++i)
        basket.add_item(Quote("ghi", 40));

    std::ofstream log("log.txt", std::ios_base::app | std::ios_base::out);

    basket.total_receipt(log);
    return 0;
}

