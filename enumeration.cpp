/*Enumerated Constants
Enumerated constants enable you to create new types and then to define variables of those types
whose values are restricted to a set of possible values. */
#include<iostream>
enum days
{
    sunday=1,monday,tuesday,wednusday,thursday,friday,saturday
};
using namespace std;
int main()
{
    days dayoff;
    int x;
    cout<<"Enter the day:";
    cin>>x;
    dayoff=days(x);
    if(dayoff==sunday || dayoff==saturday)
        cout<<"\nYou're already off on weekends!\n";
    else
        cout << "\nOkay, I'll put in the vacation day.\n";
    return 0;
}
