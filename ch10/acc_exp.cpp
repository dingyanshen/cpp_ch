#include<iostream>
#include<numeric>
#include<vector>
int main(){
    std::vector<int> v={1,2,3};
    int sum =  std::accumulate(v.cbegin(),v.cend(),0);
    std::cout<<sum<<std::endl;
    return 0;
}
