//exp8.cpp
#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::endl;
using std::vector; using std::string;
int main()
{
    int i=0,j=0,k=0;    //初始化而非赋值
    const int ci=i;     //初始化而非赋值
    //1024 = k;           //错误，字面值1024是右值
    //i+j = k;            //错误，算数表达式是右值
    //ci = k;             //错误，ci是常量（不可修改）左值
    //
    //赋值运算符左右类型不同，右侧将转换成左侧运算对象类型
    k = 0;              //k=0
    cout<<k<<endl;
    k = 3.14;           //k=3
    cout<<k<<endl;

    vector<int> vi;     //初始值为空
    //k = {3.14};         //错误，窄化转化
    vi={0,1,2,3,4,5,6,7,8,9};//十个元素 0-9
    for(auto a:vi){
        cout<<a<<" ";
    }
    return 0;
}
