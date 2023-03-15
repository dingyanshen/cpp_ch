#include<map>
#include<string>
#include<set>
#include<iostream>
using namespace std;
int main(){
    map<string,size_t> word_count;
    set<string> exclude
        ={"The","But","And","Or","An","A",
          "the","but","and","or","an","a"};
    string word;
    while(cin>>word)
        //只统计不在set中的单词
        if(exclude.find(word)==exclude.end())
            ++word_count[word];
    for(const auto& w : word_count)
        cout<<w.first<<","<<w.second<<endl;
    return 0;
}
