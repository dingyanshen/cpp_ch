//testV5.cpp
#include<iostream>
int main(){
    std::cout<< '\n';//换行
    std::cout<< "\tHi!\n";//制表符Hi！换行
    std::cout<< "\v\?\abc\b\n";//\v纵向制表符，响铃，?b ，退格,换行
    std::cout<< "Hi \x4dO\115!\n";//Hi MOM!
    std::cout<< '\115'<<'\n';//M,换行

    return 0;
}
