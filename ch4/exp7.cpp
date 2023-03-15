//exp7.cpp
#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::endl;
using std::vector; using std::string;
int main()
{
    vector<int> vec = {1,2,3,4};
    //输出vec的首元素 如果有的话
    //子表达式!vec.empty()当empty()函数返回假时结果为真
    if(!vec.empty())
        cout<<vec[0];//1
    return 0;

}
