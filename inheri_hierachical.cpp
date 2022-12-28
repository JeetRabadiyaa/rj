#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Base constructor is called...."<<endl;
    }
};
class Derived1 : public Base
{
    public:
    Derived1()
    {
    cout<<"Derived 1 constructor is called...."<<endl;
    }
};
class Derived2 : public Base
{
    public:
    Derived2()
    {
        cout<<"Derived 2 constructor is called...."<<endl;
    }
};
int main()
{
    Derived1 a;
    Derived2 b;
}