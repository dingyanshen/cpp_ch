//统计输入中每个值连续出现的次数

// example.cpp
#include <iostream>

int main() {

    // currval：保存正在统计的数；val：保存将读入的新值
    int currval = 0, val = 0;
    if (std::cin >> currval) {
        // 保存当前处理值出现的次数
        int cnt = 1;
        while (std::cin >> val) {
            if (val == currval) 	// 新读取的值与当前值相同，计数+1
                ++cnt;
            else
            {// 否则打印当前值次数，记住新值并重新开始计数
                std::cout << currval << " occurs "
                    << cnt << " times " << std::endl;
                currval = val;
                cnt = 1;
            }
        }
        std::cout << currval << " occurs "
            << cnt << " times " << std::endl;
    }
    return 0;
}
