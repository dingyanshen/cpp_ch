#include <iostream>
int main() {
    int sum = 0, val = 50;
    //只要val<=10，while循环就会持续执行
    while(val <= 100) {
        sum += val;	// 复合运算符（+=），等价于“sum = sum + val”
        ++val;		// 前缀自增运算符（++），等价于“val = val + 1”
    }
    std::cout << "Sum of 50 to 100 inclusive is "
    		  << sum << std::endl;
    return 0;
}
