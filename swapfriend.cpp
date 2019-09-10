#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    friend void sw(A&,B&);
public:
    void getvalue(int v)
    {
        a=v;
    }
    int show()
    {
        return a;
    }
};
class B
{
    int b;
    friend void sw(A&,B&);
public:
    void getvalue(int v)
    {
        b=v;
    }
    int show()
    {
        return b;
    }
};
void sw(A &m,B &n)
{
    swap(m.a,n.b);
}
int main()
{
    A o;
    B p;
    o.getvalue(10);
    p.getvalue(20);
    sw(o,p);
    cout<<"ADD: "<<o.show()<<p.show();
}
