#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
        cout<<"default constructor is called.."<<endl;
    }
    test( int a)
    {
        cout<<"parameterized constructor a:"<<a<<endl;
    }
     test( int x, int y)
    {
        cout<<" two parameterized constructor x+y:"<<x+y<<endl;
    }
     test( int x,int y,int z)
    {
        cout<<" three parameterized constructor x+y+z:"<<x+y+z<<endl;
    }
};
int main()
{
    test a(10),b(2+5),c(8+8+4);
}
