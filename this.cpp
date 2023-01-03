#include<iostream>
using namespace std;
class Box
{
    int l , b , h;
    public:
    void setdata(int l,int b,int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    void getdata()
    {
        cout<<"value of box is :"<<l*b*h;
    }
};
int main()
{
    Box a;
    a.setdata(3,2,4);
    a.getdata();
}