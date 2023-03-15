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

inline bool
is_shorter(std::string const& lhs, std::string const& rhs)
{
    return  lhs.size() < rhs.size();
}


auto elimDups(std::vector<std::string> &vs) -> std::vector<std::string>&
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
    std::vector<std::string> vs{ "abce", "bcd", "bcd", "aaae", "ccc"};
    println(vs);
    elimDups(vs);
    println(vs);
    std::stable_sort(vs.begin(), vs.end(), is_shorter);
    println(vs);

    return 0;
}

