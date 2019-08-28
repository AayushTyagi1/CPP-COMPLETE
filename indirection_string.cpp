#include<iostream>
using namespace std;
char* str[3];
int main()
{
    char *c,**cc;int i;
    str[0]="zero";
    str[1]="one";
    str[2]="two";
    for(i=0;i<3;i++)
        cout<<str[i]<<endl;
    for(i=0;i<3;i++)
    {
        cc=str+i;
        c=*cc;
        while(*c!=0)
        {
            cout<<*c;
            c += 1;
        }
        cout<<endl;
    }
}
