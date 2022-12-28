#include<iostream>
using namespace std;
class result
{
    public:
    int m,s,e,total,per;
    void setdata()
    {
        cout<<"Enter Maths marks :";
         cin>>m;
         cout<<"Enter Science marks :";
         cin>>s;
         cout<<"Enter English marks :";
         cin>>e;
    } 

};
class student : public result
{
    public:
    void calculate()
    {
      total = m + s + e;
      cout<<"Total :"<<total<<endl;
      
    }
    void getdata()
    {
      per = total / 3;   
      cout<<"per :"<<per<<endl;
    }

};
int main()
{
    student  a;
    a.setdata();
    a.calculate();
    a.getdata();
}





