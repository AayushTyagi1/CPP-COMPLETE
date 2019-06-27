/*If a function is declared with the keyword inline, the compiler does not create a real function: it
copies the code from the inline function directly into the calling function. No jump is made; it is just
as if you had written the statements of the function right into the calling function.*/
#include<iostream>
using namespace std;
inline int twice(int x)
{
    return(2*x);
}
int main()
{
    int a;
    cout<<"ENTER THE NUMBER:";
    cin>>a;
    a=twice(a);
    cout<<a<<endl;
    a=twice(a);
    cout<<a<<endl;
    a=twice(a);
    cout<<a<<endl;
}
