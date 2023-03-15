//exp2.cpp
#include <iostream>
using std::cout; using std::endl;
using std::cin;

int main()
{
    int ia[]={0,2,4,6,8};
    int last=*(ia+4); //ia[4]
    cout<<last<<endl;

    last=*ia+4; //ia[0]+4
    cout<<last<<endl;

    int v1,v2;
    cin>>v1>>v2;

    return 0;
}

