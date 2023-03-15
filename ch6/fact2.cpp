//fact2.cpp
#include <iostream>
int fact(int i)
{
    try{
        if(i<0){
            throw std::runtime_error("Input a wrong number");
        }
    }
    catch(std::runtime_error err){
        std::cout << err.what() << std::endl;
    }
    return i > 1 ? i * fact( i - 1 ) : 1;
}

int main()
{
    //std::boolalpha,可以输出 "true"或者 "false"
    std::cout << std::boolalpha << (120 == fact(5)) << std::endl;
    return 0;
}

