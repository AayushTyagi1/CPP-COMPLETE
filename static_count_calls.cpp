#include<iostream>
using namespace std;
class call
{
    static int cnt;
public:
    static void display()
    {
        cnt++;
    }
    static void show()
    {
        cout<<"fn is called " <<cnt<<" times";
    }
};

int call::cnt=0;
int main()
{
    call a;
    a.display();
    a.display();
    a.display();
    a.show();
}
