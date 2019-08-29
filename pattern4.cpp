/*
    1
   212
  32123
 4345678
543456789
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k,n;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        k=i;
        for(j=i; j<n; j++)
            cout<<" ";
        for(j=0; j<2*i-1; j++)
        {
            cout<<k;
            j>i%2?k++:k--;

        }
        cout<<endl;
    }
}

