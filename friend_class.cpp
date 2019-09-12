#include<iostream>
using namespace std;
class A
{
    int a;
    float b;
    friend class B;
public:
    void getval()
    {
        cout<<"Enter a,b :";
        cin>>a>>b;
    }
};
class B
{
    int c;float d;
public:
    void dublicate(A &x)
    {
        c=x.a;d=x.b;
    }
    void display()
    {
        cout<<c<<endl<<d;
    }
};
int main()
{
    A a;
    a.getval();
    B b;
    b.dublicate(a);
    b.display();
}
