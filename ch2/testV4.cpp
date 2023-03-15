//testV4.cpp
//无符号数不会小于0
//死循环 按ctrl+c退出
#include<iostream>

int main(){
    for(unsigned u=10;u>=0;--u){
        std::cout<<u<<std::endl;
    }
    return 0;
}
