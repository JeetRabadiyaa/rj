#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void display() = 0;
    
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
    Base *p;
    derived a;
    p = &a;
    p -> display();

    
}