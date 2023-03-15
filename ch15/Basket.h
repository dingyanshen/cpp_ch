//Basket.h:
#ifndef Basket_h
#define Basket_h
#include "Quote.h"
#include <set>
#include <memory>
class Basket
{
public:
    // Basket使用合成的默认构造函数和拷贝控制成员
    // copy verison
    void add_item(const Quote& sale)
    {
        items.insert(std::shared_ptr<Quote>(sale.clone()));
    }
    // move version
    void add_item(Quote&& sale)
    {
        items.insert(std::shared_ptr<Quote>(std::move(sale).clone()));
    }
    // 打印每本书的总价和购物篮中所有书的总价
    double total_receipt(std::ostream& os) const;

private:

    // function to compare needed by the multiset member
    static bool compare(const std::shared_ptr<Quote>& lhs,
        const std::shared_ptr<Quote>& rhs)
    {
        return lhs->isbn() < rhs->isbn();
    }

    // hold multiple quotes, ordered by the compare member
    std::multiset<std::shared_ptr<Quote>, decltype(compare)*>
        items{ compare };
};

#endif
