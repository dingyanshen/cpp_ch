//ndebug.cpp
//#define NDEBUG
#include<iostream>
using namespace std;

void print(){
    #ifndef NDEBUG
        cerr << __func__ << "..." << endl;//函数名
        cerr << __FILE__ << "..." << endl;//文件名
        cerr << __LINE__ << "..." << endl;//行号
        cerr << __TIME__ << "..." << endl;//编译时间
        cerr << __DATE__ << "..." << endl;//编译日期
    #endif
}
int main()
{
    print();
    cout<<"hello"<<endl;
}
