#include<iostream>
using namespace std;
class Food
{
    public:
    float qty, total=0, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0;
    static int count;
    void kajukari()
    {
        cout << "\n\t\t\t\t\t\t Qty for kaju kari:";
        cin >> qty;
        a = qty * 250.00;
        cout << "\t\t\t\t\t\ttotal:" << a;
        total = total + a;
        count++;
    }
    void Nan()
    {
        cout << "\n\t\t\t\t\t\t Qty for Nan:";
        cin >> qty;
        b = qty * 60.00;
        cout << "\t\t\t\t\t\ttotal:" << b;
        total = total + b;
        count++;
    }
    void pannertikka()
    {
        cout << "\n\t\t\t\t\t\t Qty for panner tikka:";
        cin >> qty;
        c = qty * 280.00;
        cout << "\t\t\t\t\t\ttotal:" << c;
        total = total + c;
        count++;
    }
    void chapati()
    {
        cout << "\n\t\t\t\t\t\t Qty for chapati:";
        cin >> qty;
        d = qty * 150.00;
        cout << "\t\t\t\t\t\ttotal:" << d;
        total = total + d;
        count++;
    }
    void butterchapati()
    {
        cout << "\n\t\t\t\t\t\t Qty for butter chapati:";
        cin >> qty;
        e = qty * 200.00;
        cout << "\t\t\t\t\t\ttotal:" << e;
        total = total + e;
        count++;
    }
    void papad()
    {
        cout << "\n\t\t\t\t\t\t Qty for papad:";
        cin >> qty;
        f = qty * 40.00;
        cout << "\t\t\t\t\t\ttotal:" << f;
        total = total + f;
        count++;
    }
    void buttermilk()
    {
        cout << "\n\t\t\t\t\t\t Qty for butter milk:";
        cin >> qty;
        g = qty * 40.00;
        cout << "\t\t\t\t\t\ttotal:" << g;
        total = total + g;
        count++;
    }
    void pepsi()
    {
        cout << "\n\t\t\t\t\t\t Qty for pepsi:";
        cin >> qty;
        h = qty * 20.00;
        cout << "\t\t\t\t\t\ttotal:" << h;
        total = total + h;
        count++;
    }
    void totall()
    {
        cout << "\n\t\t\t\t\t\t Qty of all total:" << total;
    }
     ~Food()
    {
        cout << "\n\t\t\t\t\t\t Qty of all total:" << total;
        cout << "\n\t\t\t\t\t\ttotal food order:" << Food::count;
        cout << "\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~thanks~for~visit3~~~~~~~~~~~~~~~~~~~~~~~";
    }
};
int Food::count=0;
int main()
{
    Food jeet;
    int ch;
    cout << "\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~hotel~Surbhi~~~~~~~~~~~~~~~~~~";
    cout << "\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n\t\t\t\t\t\t~     1.kaju kari                250.00     ~";
    cout << "\n\t\t\t\t\t\t~     2.Nan                      60 .00     ~";
    cout << "\n\t\t\t\t\t\t~     3.panner tikka             280.00     ~";
    cout << "\n\t\t\t\t\t\t~     4.chapati                  150.00     ~";
    cout << "\n\t\t\t\t\t\t~     5.butter chapati           200.00     ~";
    cout << "\n\t\t\t\t\t\t~     6.papad                    40 .00     ~";
    cout << "\n\t\t\t\t\t\t~     7.butter milk              40.00      ~";
    cout << "\n\t\t\t\t\t\t~     8.pepsi                    20 .00     ~";
    cout << "\n\t\t\t\t\t\t~     9.total                               ~";
    cout << "\n\t\t\t\t\t\t~     0.Exit                                 ~";
    cout << "\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    while (ch > 0)
    {
        cout << "\n\t\t\t\t\t\tENTER THE CHOISE:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            jeet.kajukari();
            break;
        case 2:
            jeet.Nan();
            break;
        case 3:
            jeet.pannertikka();
            break;
        case 4:
            jeet.chapati();
            break;
        case 5:
            jeet.butterchapati();
            break;
        case 6:
            jeet.papad();
            break;
        case 7:
            jeet.buttermilk();
            break;
        case 8:
            jeet.pepsi();
            break;
        case 9:
            jeet.totall();
            break;
        case 0:
            break;
        default:
            cout << "wrong choice...";
            break;
        }
    }
}