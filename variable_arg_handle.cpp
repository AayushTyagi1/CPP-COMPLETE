#include<iostream>
#include<cstdarg>
using namespace std;
int add(int count, ...)
{
    va_list a;
    int i;
    int sum=0;
    va_start(a,count);
    for(i=0;i<count;i++)
    {
        sum+=va_arg(a,int );
    }
    va_end(a);
    return sum;
}
int msg(char *c,...)
{
    va_list b;
    va_start(b,c);
    int rc=vfprintf(stdout,c,b);
    fputs("\n",stdout);
    va_end(b);
    return rc;
}
int main()
{
    msg("This is a message\n");
    int res =add(5,1,2,3,4,5);
    cout<<add(3,3,-3,2)<<endl;
    cout<<res;
}