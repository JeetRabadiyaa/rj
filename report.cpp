#include<iostream>
using namespace std;
class report{
    private:
    int adminno,marks[50],avg,i;
    string name;
    float getavg()
    {
        for(int i = 0; i < 5; i++)
        {
            return marks[i]/5;
        }
    }
    public:
    void readinfo()
    {
        cout<<"Enter value of admin no :";
        cin>>adminno;
        cout<<"Enter name :";
        cin>>name;
        cout<<"Enter value of admin no :";
        for(i=0;i<5;i++)
        {
            cout<<"Enter Array A[i"<<i<<"]:";
            cin>>marks[i];
        }
            avg = getavg();
    }
    void displaydata()
    {
        cout<<"Admin no :"<<adminno<<endl;
        cout<<"Name :"<<name<<endl;
        for(i=0;i<5;i++)
        {
            cout<<"Array A["<<i<<"] :"<<marks[i]<<endl;
        }
        cout<<"Average :"<<avg<<endl;
    }
};
int main()
{
    report a;
    a.readinfo();
    a.displaydata();
}