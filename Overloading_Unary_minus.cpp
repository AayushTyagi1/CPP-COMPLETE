#include<iostream>
using namespace std;
class O
{
public:
    int x,y,z;
    void operator-();
};
void O :: operator-()
{
    x= -x;
    y= -y;
    z= -z;
}
int main()
{
    O num;
    cout<<"Enter Numbers:\n";
    cin>>num.x>>num.y>>num.z;
    -num;
    cout<<"-num :\n";
    cout<<num.x<<endl<<num.y<<endl<<num.z<<endl;
    return 0;
}
