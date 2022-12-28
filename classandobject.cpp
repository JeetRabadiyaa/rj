#include<iostream>
using namespace std;
class test
{
    private:
    int marks;
    public: 
    void setdata(int m)
    {
        marks = m;
    }
    int getdata()
    {
        return marks;
    }
};
int main()
{
    test a,b;
    a.setdata(10);
    cout<<"A marks is :"<<a.getdata()<<endl;
    b.setdata(20);
    cout<<"B marks is :"<<b.getdata()<<endl;
}
