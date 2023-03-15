#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void println(const std::vector<std::string>& seq)
{
    for (auto const& elem : seq)
        std::cout << elem << " ";
    std::cout<<std::endl;
}

auto eliminate_duplicates(std::vector<std::string> &vs) -> std::vector<std::string>&
{
    std::sort(vs.begin(), vs.end());
    println(vs);

    auto new_end = std::unique(vs.begin(), vs.end());
    println(vs);

    vs.erase(new_end, vs.end());
    return vs;
}

int main()
{
    std::vector<std::string> vs{ "abc", "bcd", "bcd", "aaa", "ccc"};
    println(vs);
    println(eliminate_duplicates(vs));

    return 0;
}

