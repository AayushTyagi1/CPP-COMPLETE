#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    friend int add(A&,B&);
public:
    void getvalue(int v)
    {
        a=v;
    }
};
class B
{
    int b;
    friend int add(A&,B&);
public:
    void getvalue(int v)
    {
        b=v;
    }
};
int add(A &m,B &n)
{
    return(m.a+n.b);
}
int main()
{
    A o;
    B p;
    o.getvalue(10);
    p.getvalue(20);
    cout<<"ADD: "<<add(o,p);
}
