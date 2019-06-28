#include<iostream>
using namespace std;
class rectangle
{
public:
    rectangle(int w,int h)
    {
        int i,j;
        for(i=0;i<w;i++)
        {
            cout<<'*';
            if(i==(w-1)&&h!=1)
            {
                h--;
                i=-1;
                cout<<'\n';
                continue;
            }
        }
    }

};
int main()
{
    int width,height;
    cout<<"Enter width and height of rectangle:";
    cin>>width>>height;
    rectangle(width,height);
}
