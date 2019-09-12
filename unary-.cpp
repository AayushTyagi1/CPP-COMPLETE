#include<iostream>
using namespace std;
class neg
{
    int x,y,z;
public:
    neg(int x=0,int y=0,int z=0)
    {
        this->x =x;
        this->y =y;
        this->z =z;
    }
    void display()
    {
        cout<<x<<','<<y<<','<<z<<endl;

    }
    neg operator-()
    {
        x=-x;
        y=-y;
        z=-z;
    }
};
int main()
{
    neg o(7,-1,4);
    -o;
    o.display();
}
