//exp6.cpp
#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::endl;
using std::vector; using std::string;
int main()
{
    vector<string> text = {"abc","abc","","efg.","hi"};
    //s是对常量的引用，元素既没有拷贝也不会改变
    for(const auto& s:text){
        cout<<s;//输出当且元素
        //遇到空字符串  或者以句号结束的字符串进行换行
        if(s.empty()||s[s.size()-1]=='.'){
            cout<<endl;
        }
        else
            cout<<" ";//否则用空格隔开
    }
    return 0;
}
//abc abc
//efg.
//hi




