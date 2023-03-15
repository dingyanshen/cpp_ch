#include<iostream>
using namespace std;
int main(){
    cout<< "int * "<<sizeof(int*)*8<<endl;
    cout<< "bool "<<sizeof(bool)*8<<endl;
    cout<< "char "<<sizeof(char)*8<<endl;
    cout<< "wchar_t "<<sizeof(wchar_t)*8<<endl;
    cout<< "char16_t "<<sizeof(char16_t )*8<<endl;
    cout<< "char32_t "<<sizeof(char32_t )*8<<endl;
    cout<< "short "<<sizeof(short )*8<<endl;
    cout<< "int "<<sizeof(int )*8<<endl;
    cout<< "long "<<sizeof(long )*8<<endl;
    cout<< "long long"<<sizeof(long long)*8<<endl;
    cout<< "float "<<sizeof(float)*8<<endl;
    cout<< "double "<<sizeof(double)*8<<endl;
    cout<< "long double "<<sizeof(long double)*8<<endl;

    return 0;
}
