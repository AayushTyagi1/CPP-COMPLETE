/*
1
3 2
6 5 4
10 9 8 7
15 14 13 12 11  */
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter Limit:";
    cin>>n;
    int k=0;
    for(i=1;i<=n;i++)
    {
        k+=i;
        for(j=0;j<i;j++)
        {
            cout<<k-j<<' ';
        }
        cout<<endl;
    }
}
