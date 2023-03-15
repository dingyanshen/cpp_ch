

#include<iostream>
#include<string>
#include<sstream>
template<typename T> std::string debug_rep(const T& t)
{
    std::ostringstream ret;
    ret << t;
    return ret.str();
}

template<typename T> std::string debug_rep(T* p)
{
    std::ostringstream ret;
    ret << "pointer: " << p;

    if(p)
        ret << " " << debug_rep(*p);
    else
        ret << " null pointer";

    return ret.str();
}

template <>
std::string debug_rep(char * p)
{
    std::cout<<"debug_rep(char * p)";
	return debug_rep(std::string(p));
}

template <>
std::string debug_rep(const char * p)
{
    std::cout<<"debug_rep(const char * p)";
	return debug_rep(std::string(p));
}

int main()
{
    char p[] = "alan";
    std::cout << debug_rep(p) << "\n";
    std::cout << debug_rep("abc") << "\n";
    return 0;
}


