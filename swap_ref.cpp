#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
    int a,b;
    cout<<"Enter a,b:";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<','<<b;
}
void swap(int &r1,int &r2)
{
    int x;
    x=r1;
    r1=r2;
    r2=x;
}
