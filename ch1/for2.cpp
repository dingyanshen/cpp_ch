#include <iostream>
int main(){
  int sum=0;
  //从1加到10
  for(int val=50;val<=100;++val){
    sum+=val;//等价于sum=sum+val;
  }
  std::cout <<"Sum of 50 to 100 inclusive is "
            <<sum<<std::endl;
  return 0;
}
