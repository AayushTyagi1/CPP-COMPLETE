#include<iostream>
using namespace std;
class CAT
{
public:
    CAT();
    CAT(CAT &);
    ~CAT();
    int getage(){return *age;}
    int getweight(){return *weight;}
    void setage(int itsage){*age=itsage;}
private:
    int *age,*weight;
};
CAT::CAT()
{
    age=new int;
    weight = new int;
    *age=5;
    *weight=9;
}
CAT::CAT(CAT &r)
{
    age=new int;
    weight =new int;
    *age=r.getage();
    *weight = r.getweight();
}
CAT::~CAT()
{
    delete age;
    age=0;
    delete weight;
    weight=0;
}
int main()
{
    CAT mea;
    cout<<"mea's age:"<<mea.getage()<<endl;
    cout << "Setting frisky to 6...\n";
    mea.setage(6);
    CAT boots(mea);
    cout << "mea's age: " << mea.getage() << endl;
    cout << "boots' age: " << boots.getage() << endl;
    cout<<"setting mea to 7..\n";
    mea.setage(7);
   cout << "mea's age: " << mea.getage() << endl;
    cout << "boots' age: " << boots.getage() << endl;
}
