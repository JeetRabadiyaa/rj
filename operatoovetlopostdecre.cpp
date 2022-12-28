#include<iostream>
using namespace std;
class Num
{
    int real,img;
    public:
    void setdata(int r, int i);
    void getdata();
    Num operator--(int);
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
Num Num :: operator--(int)
{
    Num r;
    r.real = real--;
    r.img = img--;
}
int main()
{

    Num a,b;
    a.setdata(2,3);
    a.getdata();
    cout<<"after decrement :"<<endl;
    a--;
    b = a;
    b.getdata();
}