/*************************************************************************
	> File Name: hello.cpp
	> Author: Your Name
	> Mail: Your Name@xxx.com 
	> Created Time: 2021年12月15日 星期三 16时00分03秒
 ************************************************************************/

#include<QApplication>
#include<QLabel>
using namespace std;
int main(int argc,char** argv)
{
     
	QApplication a(argc,argv);

	QLabel l("helloworld");
	l.show();
	a.exec();
    return 0;
}
