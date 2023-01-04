#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void display()
    {
        cout<<"Base display function called..."<<endl;
    }
};
class derived : public Base
{
    public:
    void display()
    {
        cout<<"derived class dispaly function called..."<<endl;
    }
};
int main()
{
    Base *p,s;
    derived a;
    p = &a;
    p -> display();

    p = &s;
    p -> display();
}