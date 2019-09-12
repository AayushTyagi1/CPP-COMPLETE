#include<iostream>
using namespace std;
class intro
{
    string *name;
    int *age;
public:
    intro(string iname,int iage)
    {
        name=new string;
        age=new int;
        *name=iname;
        *age=iage;
    }
    void display()
    {
        cout<<*name<<endl<<*age<<endl;
    }
    ~intro()
    {
        delete name;
        delete age;
        cout<<"All memories are released";
    }
};
int main()
{
    intro *me=new intro("Aayush",20);
    me->display();
    delete me;
    return 0;
}
