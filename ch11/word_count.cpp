#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>

void word_count_pro(std::map<std::string, int>& m)
{
    std::string word;
    while (std::cin >> word)
    {
        for (auto& ch : word)
            ch = tolower(ch);
        //要删除的元素移到容器末尾并返回要被删除元素的迭代器，
        //然后通过erase成员函数来真正删除。因为一般remove_if和erase函数是成对出现的。
        word.erase(std::remove_if(word.begin(), word.end(), ispunct),
            word.end());
        ++m[word];
    }
    for (const auto& e : m) std::cout << e.first << " : " << e.second << "\n";
}

int main()
{
    std::map<std::string, int> m;
    word_count_pro(m);

    return 0;
}


