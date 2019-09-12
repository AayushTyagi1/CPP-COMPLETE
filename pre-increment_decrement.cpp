#include<iostream>
using namespace std;
class marks
{
    int m;
public:
    marks(int m=0)
    {
        this->m=m;
    }
    void display()
    {
        cout<<"Marks are "<<m<<endl;
    }
    marks operator++()
    {
        m=m+1;
    }
    friend marks operator--(marks &);
};
marks operator--(marks &a)
{
    a.m-=1;
}
int main()
{
    marks b(78);
    b.display();
    ++b;
    b.display();
    --b;
    b.display();
}
