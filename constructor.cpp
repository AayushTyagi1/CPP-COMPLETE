/*CONSTRUCTOR
A constructor is a member function of a class which initializes objects of a class. In C++,
Constructor is automatically called when object(instance of class) create. It is special
 member function of the class.
 Default constructor is the constructor which doesn’t take any argument. It has no parameters.Below is an example of default constructor
 */
 #include<iostream>
 using namespace std;
 class construct
 {
 public:
    int a;int b;
    construct()
    {
        a=10;b=12;
    }
 };
 int main()
 {
     construct c;
     cout<<c.a<<endl<<c.b;
 }


