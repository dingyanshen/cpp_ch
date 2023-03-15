//stringAdd.cpp
#include <iostream>
using std::cout; using std::endl;
#include <string>
using std::string;
int main()
{
    string s1  = "hello, ", s2 = "world";
    string s3 = s1 + "," + s2 + '\n';   // s3 is hello, world\n
    cout << s1<< s2 <<endl << s3 << endl;
    string s4 = s1+"," ;                 // ok,string+","
    //string s5 = "hello"+",";            //error, " "+" "
    string s6=s1+","+"world";
    //string s7="hello"+","+s2;           //error, " "+" " 原因：第一个必须是string对象
    cout<<s4<<endl<<s6<<endl;
    while(1);
    return 0;
}

