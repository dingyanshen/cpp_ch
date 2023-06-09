#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include "Quote.h"
int main(){
    std::vector<Quote> v;
    for (unsigned i = 1; i != 10; ++i)
        v.push_back(Bulk_quote("abc", 10 , 10, 0.1));
    double total = 0;
    for (const auto& b : v){
        total += b.net_price(20);
    }
    std::cout << total << std::endl;
    std::cout << "======================\n\n";
    std::vector<std::shared_ptr<Quote>> pv;
    for (unsigned i = 1; i != 10; ++i)
        pv.push_back(std::make_shared<Bulk_quote>(Bulk_quote("abc",   10, 10, 0.1)));
    double total_p = 0;
    for (auto p : pv)    {
        total_p += p->net_price(20);
    }
    std::cout << total_p << std::endl;
    return 0;
}

    // 1800
    //1620

