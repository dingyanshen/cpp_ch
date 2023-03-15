#include<iostream>
#include<string>
#include<memory>

#include "unique_ptr2.h"
#include "shared_ptr2.h"
#include "DebugDelete.h"
template class shared_ptr2<int>;

int main()
{
    shared_ptr2<int> sp(new int(12345), DebugDelete()) ,sp1;;
    shared_ptr2<std::string> ssp(new std::string("abcde"));
    std::cout << *sp << std::endl;
    std::cout << sp.unique() << " " << sp.use_count() << " " << *(sp.get()) << std::endl;
    std::cout << ssp.unique() << " " << ssp.use_count() << " " << *(ssp.get()) << std::endl;
    sp = sp;
    sp1 = sp;
    std::cout << sp1.unique() << " " << sp1.use_count() << " " << *(sp1.get()) << std::endl;
    sp1 = std::move(sp);
    std::cout << sp1.unique() << " " << sp1.use_count() << " " << *(sp1.get()) << std::endl;
    ssp.reset(new std::string("efghi"), DebugDelete());
    std::cout << ssp.unique() << " " << ssp.use_count() << " " << *(ssp.get()) << std::endl;



    unique_ptr2<int> up1(new int(67890)), up2;
    std::cout << *up1 << " " << *(up1.get()) << std::endl;
    up2 = std::move(up1);
    std::cout << *up2 << " " << *(up2.get()) << std::endl;
    up2 = nullptr;
    up2.reset(new int(2));
    std::cout << *up2 << " " << *(up2.get()) << std::endl;
    //up2 = up2;
    unique_ptr2<std::string, DebugDelete> up3(new std::string("12345"), DebugDelete());
    std::cout << *up3 << " " << *(up3.get())  << " " <<  up3->size() << std::endl;
    return 0;
}
