#include<iostream>
using namespace std;
class test
{
    int r,i;
    public:
    void setdata(int a,int b)
    {
        r = a;
        i = b;
    }
    void getdata()
    {
        cout<<"Num is:"<<r<<"+"<<i<<"i"<<endl;
    }
    friend test operator++(test);
};
test operator++ (test t)
{
    test a;
    a.r = ++t.r;
    a.i = ++t.i;
    return a;
}
int main()
{
    test a,b;
    a.setdata(12,50);
    cout<<"before increment :"<<endl;
    a.getdata();
    b = ++a;
    cout<<"after increment :"<<endl;
    b.getdata();
}