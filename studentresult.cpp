#include<iostream>
using namespace std;
class student
{
    public:
    int m,s,e,total,per;
    void setdata()
    {
        cout<<"enter maths marks :";
        cin>>m;
        cout<<"enter science marks :";
        cin>>s;
        cout<<"enter english marks :";
        cin>>e;
    }
    void calculate()
    {
    total = m + s + e;
    cout<<"Total :"<<total<<endl;
    per = total / 3;
    cout<<"per :"<<per<<endl;
    }
};
int main()
{
    student jeet,denil;
    jeet.setdata();
    jeet.calculate();
    denil.setdata();
    denil.calculate();


}