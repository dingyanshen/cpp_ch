//using1.cpp
#include <iostream>
// using 声明，当我们使用cin时，从命名空间std中获取
using std::cin;

int main()
{
    int i;
    cin >> i;//正确 cin和std::cin含义相同
    //cout<< i;//错误 没有对应的using声明，必须使用完整的名字
            //error: ‘cout’ was not declared in this scope; did you mean ‘std::cout’?
    std::cout<< i;//正确 显示地从std中使用cout
    while(1);
    return 0;
}
