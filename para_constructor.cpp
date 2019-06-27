//Parameterized Constructors: It is possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is created.
//To create a parameterized constructor, simply add parameters to it the way you would to any other function.
// When you define the constructor's body, use the parameters to initialize the object.
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
};

int main()
{
    // Constructor called
    para p(10, 15);
    // Access values assigned by constructor
    cout << "p1.x = " << p.getX() << ", p1.y = " << p.getY();

    return 0;
}
