/*
1
-2  3
-4  5  -6
7  -8  9  -10
11  -12  13  -14  15 */
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter Limit:";
    cin>>n;
    int c=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            c%2==0?cout<<-1*c:cout<<c;
            cout<<"  ";
            c++;
        }
        cout<<endl;
    }
}
