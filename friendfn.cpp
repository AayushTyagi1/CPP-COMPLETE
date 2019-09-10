#include<iostream>
using namespace std;
class sample
{
    int a,b;
public:
    void setvalue(){a=11;b=20;};
    friend float mean(sample s);
};
float mean(sample s)
{
    return((s.a+s.b)/2.0);
}
int main()
{
    sample a;
    a.setvalue();
    cout<<"Mean Value = "<<mean(a)<<endl;
    return 0;
}
