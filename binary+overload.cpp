#include<iostream>
using namespace std;
class marks
{
    int internals;
    int externals;
public:
    marks(int inter=0,int exter=0)
    {
        internals=inter;
        externals=exter;
    }
    void display()
    {
        cout<<internals<<'\t'<<externals<<endl;
    }
    marks operator+(marks m)
    {
        marks temp;
        temp.internals=m.internals+internals;
        temp.externals=m.externals+externals;
        return(temp);
    }
};
int main()
{
    marks sem1(10,30);
    marks sem2(10,40),year;
    year=sem1+sem2;
    sem1.display();
    sem2.display();
    year.display();
}
