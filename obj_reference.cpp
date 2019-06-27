#include<iostream>
using namespace std;
class book
{
private:
    int id=1213421;
public:
    int pages=112;
    float price;
    int getprice();
};
book::getprice()
{
   price= 3000;
}
int main()
{
    book b1;
    book &rb1 = b1;
    rb1.getprice();
    cout<<b1.pages<<'\t'<<b1.price<<endl;
    cout<<rb1.price;
}
