#include <iostream>
using namespace std;
void swap(int **x, int **y)
{ int *t;
  t = *x;
  *x = *y;
  *y = t;
}
int main()
{	int a=0,b=1;
	int *p=&a,*q=&b;
	cout << *p << ',' << *q << endl;  //输出：0,1
	swap(&p,&q);
	cout << *p << ',' << *q << endl;  //输出：1,0
	return 0;
}
