//find_char.cpp
#include<iostream>
#include<string>
using namespace std;
string::size_type find_char(const string &s,char c,
        string::size_type &occurs){
    auto ret=s.size();
    occurs=0;
    for(decltype(ret)i=0;i!=s.size();++i){
        if(s[i]==c){
            if(ret==s.size())
                ret=i;
            ++occurs;
        }
    }
    return ret;
}
int main(){
    string s = "bbasdfa";
    string::size_type ctr=0;
    auto index  = find_char(s,'a',ctr);
    cout<<index<<" "<<ctr<<endl;// 2 2
}
