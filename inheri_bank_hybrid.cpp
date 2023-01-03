#include <iostream>
using namespace std;
class Bank
{
public :
    char Account_Type[20];
};
class Saving : public Bank
{
    public:
    int Balance = 1000;
    void sdeposite(int m)
    {
        Balance = Balance + m;
        cout << "Deposite Amount : " << m << endl;
    }
    void swithdraw(int n)
    {
        if (Balance < n)
        {
            cout << "Influence Balance :" << endl;
        }
        else
        {
            Balance = Balance - n;
            cout << "Your Withdraw Amount is:" << n << endl;
        }
    }
};
class get :public Saving
{
    public:
    void sshowbalance()
    {
        cout << "Show Balance " << Balance << endl;
    }
};
class Current : public Bank
{
    int balance = 10000;

    public:
    void cdeposite(int p)
    {
        balance = balance + p;
        cout << "Depoiste Balance : " << p << endl;
    }
    void cwithdraw(int q)
    {

        if (balance < q)
        {
            cout << "Influence Amount:" << endl;
        }
        else
        {
            balance = balance - q;
            cout << "Your Withdraw Balance :" << q << endl;
        }
    }
    void cshowbalance()
    {
        cout << " balance : " << balance << endl;
    }
};
int main()
{
    Saving s;
    Current c;
    get b;
    int ch, x;
    char a;
    lable:
    cout<<"Choice For Bank Account Type"<<endl<<"Write s for saving Account  & c for  curremnt Account "<<endl;
    cout << "Bank Account type: ";
    cin >> a;
    if (a == 's' )
    {
        while (ch != 4)
        {
            cout << "1. Diposite Amount " << endl;
            cout << "2. Withraw Amount " << endl;
            cout << "3. Show Balance " << endl;
            cout << "4. Exit " << endl;
            
            
            cin >> ch;

            switch (ch)
            {
            case 1:
                cout << " deposite:" << endl;
                cin >> x;
                s.sdeposite(x);
                break;
            case 2:
                cout << " withdraw:" << endl;
                cin >> x;
                s.swithdraw(x);
                break;
            case 3:
                b.sshowbalance();
                break;
            case 4:
                cout<<"THANK FOR VISIT"<<endl;
                return 0;
                break;
            default:
                cout << "invalid choice"<<endl;
                break;
            }
        }
    }
    else if (a == 'c')
    {
    while (ch != 4)
        {
            cout << "1. Diposite Amount " << endl;
            cout << "2. Withraw Amount " << endl;
            cout << "3. Show Balance " << endl;
            cout << "4. Exit " << endl;
            cout << "Enter your choice " << endl;
            cin >> ch;

            switch (ch)
            {
            case 1:
                cout << " deposite:" << endl;
                cin >> x;
                c.cdeposite(x);
                break;
            case 2:
                cout << " withdraw:" << endl;
                cin >> x;
                c.cwithdraw(x);
                break;
            case 3:
                c.cshowbalance();
                break;
            case 4:
                cout<<"THANK FOR VISIT"<<endl;
                return 0;
                break;
            default:
                cout << "invalid choice"<<endl;
                break;
            }
        }
    }
    else
    {
        cout<<"ENTER VALID ACCOUNT TYPE"<<endl;
        goto lable;
    }
}























































