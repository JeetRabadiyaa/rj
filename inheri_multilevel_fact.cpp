#include<iostream>
using namespace std;
class fact
{
    public:
    int numb,fac=1;
    void setdata()
    {
        cout<<"Enter Number :";
        cin>>numb;
    }
};
class num :public fact
{
    public:
    void cal()
    {
        if(numb < 0)
        {
            cout<<"Negative Number :";
        }
        else
        {
            for(int i =1; i<=numb; i++)
            {
                fac = fac * i;
            }
        }
    }
};
class derived : public num
{
    public:
    void getdata()
    {
        cout<<"Number is :"<<fac<<endl;
    }
};
int main()
{
    derived a;
    a.setdata();
    a.cal();
    a.getdata();
}


