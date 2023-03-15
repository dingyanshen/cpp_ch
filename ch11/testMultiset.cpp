#include<set>
#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    multiset<string> c={"abc","def"};
    vector<string> v={"123","456"};
    copy(v.begin(),v.end(),inserter(c,c.end()));
    //copy(v.begin(),v.end(),back_inserter(c));


    for(auto a:c) cout<<a<<","<<endl;

}
