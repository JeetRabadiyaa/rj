#include<iostream>
using namespace std;
class Base
{
    public:
    int n;
    public:
    void setdata()
    {
        cout<<"Enter N :";
        cin>>n;
    }
};
class derived : public Base
{
    public:
    void getdata()
    {
        cout<<"Value of N is :"<<n;
    }
};
int main()
{
    derived a;
    a.setdata();
    a.getdata();

}