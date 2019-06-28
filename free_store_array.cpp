#include<iostream>
using namespace std;
int main()
{
    int *arr[50];
    int i,n,temp;
    cout<<"enter limit:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        arr[i]=new int;
        cin>>*arr[i];
    }
    fflush(stdin);
    for(i=0;i<n;i++)
    {
        cout<<*arr[i]<<endl;
    }
}
