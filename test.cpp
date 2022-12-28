#include<iostream>
using namespace std;
class test{
    int testcode,nocandidate,centerreqd;
    string description;
    float calcntr()
    {
        return(nocandidate/100+1);

    }
    public:
    void schedule()
    {
    cout<<"Enter value of test code :";
    cin>>testcode;
    cout<<"Enter description :";
    cin>>description;
    cout<<"Enter no of candidate :";
    cin>>nocandidate;  
    centerreqd=calcntr();     
    }
    void diptest()
    {
    cout<<"Test code :"<<testcode<<endl;
    cout<<"Description :"<<description<<endl;
    cout<<"No of candidate :"<<nocandidate<<endl;
    cout<<"Req center :"<<centerreqd<<endl;
    }
};
int main()
{
    test a;
    a.schedule();
    a.diptest();
}
