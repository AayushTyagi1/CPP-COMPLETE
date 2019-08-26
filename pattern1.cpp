/*
0
01
010
0101
01010 */
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter Limit:";
    cin>>n;
    string a="0";
    for(i=0;i<n;i++)
    {
        cout<<a;
        i%2==0?a.insert(i+1,"1"):a.insert(i+1,"0");
        cout<<endl;
    }
}
