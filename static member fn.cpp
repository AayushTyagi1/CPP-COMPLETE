#include<iostream>
using namespace std;
class human
{
    static int human_cnt;
public:
    human()
    {
        human_cnt++;
    }
    static void display()
    {
        cout<<"Number of humans are "<<human_cnt<<endl;
    }
};
int human::human_cnt=0;
int main()
{
    human aayush, ashish ,atan ,arushi;
    human::display();
}
