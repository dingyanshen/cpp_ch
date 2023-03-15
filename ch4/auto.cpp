#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::endl;
using std::vector; using std::string;
int main()
{
    vector<string> vec = {"abc","efg"};
    for(const auto& a: vec){
        cout<<a<<endl;
    }
    return 0;

}
