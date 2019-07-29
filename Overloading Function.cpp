#include<iostream>
using namespace std;

int area(int a)//for square
{
    return (a*a);
}

int area(int a,int b)//for rectangle
{
    return (a*b);
}
float area(float b,float h)//for triangle
{
    return(0.5*b*h);
}
float area(float r)//for circle
{
    return(3.14*r*r);
}
int main ()
{
    int a,b;
    float base,h;
    cout<<"Enter side of square:";
    cin>>a;
    cout<<"Area : ";
    cout<<area(a)<<endl;
    cout<<"Enter sides of rectangle:";
    cin>>a>>b;
    cout<<"Area : ";
    cout<<area(a,b)<<endl;
    cout<<"Enter base and height of triangle:";
    cin>>base>>h;
    cout<<"Area : ";
    cout<<area(base,h)<<endl;
    cout<<"Enter radius of circle :";
    cin>>h;
    cout<<"Area : ";
    cout<<area(h)<<endl;
    return 0;
}
