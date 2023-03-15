
//Basket cpp:
#include "Basket.h"
double Basket::total_receipt(std::ostream &os) const
{
    double sum = 0.0;  // 保存实时计算出的总价格

    // iter指向ISBN相同的一批元素中的第一个
    // upper_bound返回一个迭代器，该迭代器指向这批元素的尾后位置
    for (auto iter = items.cbegin(); iter != items.cend();
        iter = items.upper_bound(*iter))
        //  ^^^^^^^^^^^^^^^^^^^^^^^^^^^
        // @note   this increment moves iter to the first element with key
        //         greater than  *iter.

    {
        sum += print_total(os, **iter, items.count(*iter));
    }                                   // ^^^^^^^^^^^^^ using count to fetch
    // the number of the same book.
    os << "Total Sale: " << sum << std::endl;
    return sum;
}

