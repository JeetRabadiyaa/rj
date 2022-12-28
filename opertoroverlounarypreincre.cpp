#include<iostream>
using namespace std;
class Num
{
    int real,img;
    public:
    void setdata(int r, int i);
    void getdata();
    Num operator++();
};
void Num ::setdata(int r,int i)
{
    real = r;
    img = i;
}
void Num ::getdata()
{
    cout<<"Num is:"<<real<<"+"<<img<<"i"<<endl;
}
Num Num :: operator++()
{
    Num r;
    r.real = ++real;
    r.img = ++img;
}
int main()
{
    Num a,b;
    a.setdata(2,3);
    a.getdata();
    cout<<"after increment :"<<endl;
    b = ++a;
    b.getdata();
}