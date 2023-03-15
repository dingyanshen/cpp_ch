#include<iostream>

int main(){
    unsigned  u =10;
    int i=-42;
    std::cout<<i+i<<std::endl; // -84
    std::cout<<u+i<<std::endl; // ?4294967264
    return 0;
}
