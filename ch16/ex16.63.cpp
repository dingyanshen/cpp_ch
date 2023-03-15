
#include <iostream>
#include <vector>
#include <cstring>
using std::string;
// template
template<typename T>
std::size_t  count(const std::vector<T> & vec, T   value)
{
    auto count = 0;
    for(auto const& elem  : vec)
        if(value == elem) ++count;
    return count;
}

// template specialization
template<>
std::size_t count (const std::vector<const char*> & vec, const char*  value)
{
    auto count = 0;
    for(auto const& elem : vec)
        if(0 == strcmp(value, elem)) ++count;
    return count;
}
int main()
{
    // for ex16.63
    std::vector<double> vd = { 1.1, 1.1, 2.3, 4 };
    std::cout << count(vd, 1.1) << std::endl;

    std::vector<int> vi = {1,2,3,1};
    std::cout << count(vi, 1) << std::endl;

    std::vector<string> vs = {"abc","ab","abc"};
    std::cout << count(vs, std::string("abc") )<< std::endl;

    // for ex16.64
    std::vector<const char*> vcc = { "alan", "alan", "alan", "alan", "moophy" };
    std::cout << count(vcc, "alan") << std::endl;

    return 0;
}


