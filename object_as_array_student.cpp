#include <iostream>
using namespace std;
class result
{
public:
    int total, per, m, s, e;
    void setdata()
    {
        cout << "\nENTER MATHS MARKS =";
        cin >> m;
        cout << "ENTER SCINCE MARKS =";
        cin >> s;
        cout << "ENTER ENGLISH MARKS =";
        cin >> e;
    }
    void calculate()
    {
        total = m + s + e;
        cout << "TOTAL =" << total << endl;
        per = total / 3;
        cout << "PERCENTAGE = " << per << endl;
    }
};
int main()
{
    result a[5], b;
    for (int i = 0; i < 2; i++)
    {
        cout<<"Enter Student Detail is :-"<<i+1<<endl;
        a[i].setdata();
        cout<<endl;
    }
    for (int i = 0; i < 2; i++)
    {
        cout<<"Student Detail is :-"<<i+1<<endl;
        a[i].calculate();
        cout<<endl;
    }
}
        