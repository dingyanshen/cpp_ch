//trans.cpp
#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::endl;
using std::vector; using std::string;
int main()
{
    bool    flag=true;; char              cval='a';
    short   sval=1  ; unsigned short    usval=0;
    int     ival=0; unsigned int      uival=0;
    long    lval=0; unsigned long     ulval=0;
    float   fval=0.1; double            dval=0.1;

    3.1415926L + 'a';   //'a'提升成int，然后int转成long double
    cout<<    dval + ival<<endl;        //ival->double
    cout<<typeid(dval+ival).name() ;
    dval + fval;        //fval->double
    ival = dval;        //dval->int,小数部分丢弃
    flag = dval;        //如果dval非0则真
    cval + fval;        //cval提升int，int转float
    sval + cval;        //sval cval ->int
    cval + lval;        //cval -> long
    ival + ulval;       //ival->unsigned int
    usval +ival;        //根据unsigned short he int 所占空间进行提升
    uival +lval;        //根据unsigned int 和long所占空间大小进行转换

    return 0;

}
