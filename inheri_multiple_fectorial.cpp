#include<iostream>
using namespace std;
class fact
{
    public:
    int numb;
    void setdata()
    {
        cout<<"Enter Number :";
        cin>>numb;
    }
};
class j 
{
    public:
    int fac=1;
    void getdata()
    {
        cout<<"Number is :"<<fac<<endl;
    }
};
class num : public fact ,public j
{
    public:
    void cal()
    {
        if(numb<0)
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
int main()
{
    num a;
    a.setdata();
    a.cal();
    a.getdata();
}


