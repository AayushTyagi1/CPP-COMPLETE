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
    friend marks operator+(marks m,marks n);

};
    marks operator+(marks m,marks n)
    {
        return(marks((m.internals+n.internals),(m.externals+n.externals)));
        //marks temp;
        //temp.internals=m.internals+n.internals;
        //temp.externals=m.externals+n.externals;
        //return(temp);
    }
int main()
{
    marks sem1(10,30);
    marks sem2(10,40),year;
    year=sem1+sem2;
    sem1.display();
    sem2.display();
    year.display();
}

