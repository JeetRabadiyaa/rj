#include<iostream>
using namespace std;
class box
{
    int l,b,h;
    public:
    static int count;
    
    void setdata(int x, int y,int z)
    {
        l = x;
        b = y;
        h = z;
        ++count;    
    }
    int getdata()
    {
        return l*b*h;
    }
};
int box :: count = 0;
int main()
{
    cout<<"initial stage :"<<box :: count<<endl;
    box a,b;
    a.setdata(2,2,2);
    b.setdata(3,3,3);
    cout<<"volume of box a is:"<<a.getdata()<<endl;
    cout<<"volume of box b is:"<<b.getdata()<<endl;
    cout<<"final stage:"<<box :: count<<endl;
}





























































































































































