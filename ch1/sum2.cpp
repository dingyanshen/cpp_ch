// 读取数量不定的输入数据
#include <iostream>
int main() {
    int sum = 0, val = 0;
    // 读取数据直到文件尾，计算所有读入值的和
    while(std::cin>>val) {
        sum += val;	// 复合运算符（+=），等价于“sum = sum + val”
    }
    std::cout << "Sum is "
    		  << sum << std::endl;
    return 0;
}
