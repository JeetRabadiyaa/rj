#include<iostream>
using namespace std;
class bank
{
    int amount=100000;
    public:
    void deposite(int n)
    {
        
        amount = amount + n;
    }
    int withdrawl(int n)
   {
        if (n <= amount)
        {
            amount = amount - n;
        }
        else
        {
            cout<<"influence balance...:";
        }
   }
   void balance()
   {
        cout<<"\n Total Balance :"<<amount;
   }
};
int main()
{
    bank a;
    a.deposite(5000);
    a.withdrawl(5000);
    a.balance();
}