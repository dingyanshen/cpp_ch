#include<iostream>
using namespace std;
class base {
public:
    string name() { cout<<"base_name"<<endl;return basename;}
    virtual void print(ostream &os) { os << "base_print"<<endl; }
private:
    string basename;
};
class derived : public base {
public:

void print(ostream &os) override {os<<"derived_print"<<endl;}
private:
    int i;
};
int main(){
base bobj;
derived dobj;
base *bp1 = &bobj;
base *bp2 = &dobj;
base &br1 = bobj;
base &br2 = dobj;

bobj.print(cout);
dobj.print(cout);
bp1->name();
bp2->name();
br1.print(cout);
br2.print(cout);
    return 0;
}
