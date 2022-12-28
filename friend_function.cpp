#include<iostream>
using namespace std;
class Num
{
    int a,b;
    public:
    friend int largeNum(Num);
    void setdata(int x,int y)
    {
        a = x;
        b = y;
    }
};
int largeNum(Num t)
{
    if(t.a > t.b)
        return t.a;
    else
        return t.b;
} 
int main()
{
    Num p;
    p.setdata(100,30);
    cout<<"larger Number is: "<<largeNum(p);
}