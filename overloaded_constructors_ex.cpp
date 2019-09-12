#include<iostream>
using namespace std;
class constr
{
    string name;
    int age;
public:
    constr(string iname="noname",int iage=0)
    {
        name=iname;
        age=iage;
    }
    constr(int iage)
    {
        age=iage;
    }
    void display()
    {
        cout<<endl<<name<<endl<<age;
    }

};
int main()
{
    constr ol("Ayush",19);
    ol.display();
    constr om(20);
    om.display();
    constr ok;
    ok.display();
}

