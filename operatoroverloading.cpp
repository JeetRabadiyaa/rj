#include<iostream>
using namespace std;
class Num
{
    int real , img;
    public:
    void setdata(int r,int i);
    void getdata()
    {
        cout<<"num is :"<<real<<"+"<<img<<"i"<<endl;
    }
    Num operator+ (Num &z)
    {
        Num t;
        t.real = real + z.real;
        t.img = img + z.img;
        return t; 
    }
};
void Num ::setdata(int r,int i)
{
    real = r;
    img = i;
}
int main()
{
    Num a,b,c;
    a.setdata(15,30);
    b.setdata(25,20 );
    a.getdata();
    b.getdata();
    c = a + b;
    c.getdata();
}
