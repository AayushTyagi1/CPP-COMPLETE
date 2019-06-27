/*Function polymorphism refers to the ability to "overload" a function with more than one meaning*/
//A function to find square of the value
#include<iostream>
using namespace std;
int square(int x){return x*x;}
float square(float x){return x*x;}
double square(double x){return x*x;}
int main()
{
    int a;float b;double c;
    cout<<"Enter numbers:";
    cin>>a>>b>>c;
    cout<<square(a)<<endl;
    cout<<square(b)<<endl;
    cout<<square(c);
}
