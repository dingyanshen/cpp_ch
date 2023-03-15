//biSearch.cpp
#include<iostream>
#include<string>
using std::string;using std::iterator;
using std::cout;using std::endl;
int main(){
    string text="abcdefghi";
    cout<<text<<endl;


    auto beg = text.begin(),end=text.end();
    auto mid = beg+(end-beg)/2;
    char sought = 'c';

    while(mid!=end&&*mid!=sought){
        if(sought<*mid)
            end=mid;
        else
            beg=mid+1;
        mid=beg+(end-beg)/2;
    }

    if(*mid==sought){
        cout<<"found:"<<*mid<<"@"<<mid-text.begin()<<endl;
    }
    return 0;
}
