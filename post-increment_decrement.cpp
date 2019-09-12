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
    marks operator++(int)
    {
        marks temp(*this);
        m=m+1;
        return(temp);
    }
    friend marks operator--(marks &,int);
};
marks operator--(marks &a,int)
{
    marks temp(a);
    a.m-=1;
    return temp;
}
int main()
{
    marks b(78);
    b.display();
    (b++).display();
    b.display();
    (b--).display();
    b.display();
}
