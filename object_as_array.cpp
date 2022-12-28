#include<iostream>
using namespace std;
class test
{
    int r,i;
    public:
    void setdata()
    {
        cout<<"Enter real num :";
        cin>>r;
        cout<<"Enter img num :";
        cin>>i;
    }
    void getdata()
    {
        cout<<"Num is :"<<r<<"+"<<i<<"i"<<endl;
    }
};
int main()
{
    test a[5];
    int i;
    for(i = 0; i<2; i++)
    {
        cout<<"Enter Detail is :"<<i+1<<endl;
        a[i].setdata();
        cout<<endl;
    }
    cout<<"Printing Number :"<<endl<<endl;
    for(i = 0; i<2; i++)
    {
        cout<<"Detail is :"<<i+1<<endl;
        a[i].getdata();
        cout<<endl;
    }
} 