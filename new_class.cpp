#include<iostream>
using namespace std;
class human
{
    string name;
public:
    void introduce()
    {
        cout<<"Hi, I am "<<name;
    }
    void getname(string s)
    {
        name=s;
    }
};
int main()
{
    human *p=new human;
    p->getname("Aayush");
    p->introduce();
}
