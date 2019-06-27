//Destructor is a member function which destructs or deletes an object.
#include<iostream>
using namespace std;
class para{
private:
    int x, y;

public:
    // Parameterized Constructor
    para(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    ~para()
    {
        cout<<endl<<"Destructor"<<endl;
    }
};

int main()
{
    // Constructor called
    para p(10, 15);
    // Access values assigned by constructor
    cout << "p1.x = " << p.getX() << ", p1.y = " << p.getY()<<endl;
    para q(1,2);
    cout<<q.getX()<<endl<<q.getY();

    return 0;
}
