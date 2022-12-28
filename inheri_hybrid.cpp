#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"base constructor is called...."<<endl;
    }
};
class derived1 : public base
{
    public:
    derived1()
    {
        cout<<"derived 1 constructor is called....."<<endl;
    }
};
class derived2
{
    public:
    derived2()
    {
        cout<<"derived 2 constructor is called....."<<endl;
    }
};
class ABC : public derived1, public derived2
{
    public:
    ABC()
    {
        cout<<"ABC constructor is called..."<<endl;
    }
};
int main()
{
    ABC a;
    
}
