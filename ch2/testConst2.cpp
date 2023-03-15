

#include<iostream>

int main(){
    //当一个常量引用被绑定到另外一种类型发生了什么
    double dval = 3.14;
    //编译器将上述代码改为如下形式
    const int temp=dval;//生成临时整型变量
    const int &ri=temp;//让ri绑定这个临时变量
    //int null=0,*p=null;
    return 0;
}
