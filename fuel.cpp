#include<iostream>
using namespace std;
class fuel{
    int fnumber;
    string destination;
    float distance,fuel;

    float calfuel()
    {
        if(distance<=10000)
        {
            fuel = 500 ;
        }
        else if(distance>1000 && distance<=2000)
        {
            fuel = 1100 ;
        }
        else
        {
            fuel = 2200 ;
        }
        return fuel ;
    }
    public:
    void feedinfo()
    {
        cout<<"Enter flight number :";
        cin>>fnumber;
        cout<<"Enter destination :";
        cin>>destination;
        cout<<"Enter distance :";
        cin>>distance;

        fuel = calfuel();
    }

    void showinfo()
    {
        cout<<"Flight number :"<<fnumber<<endl;
        cout<<"Destination :"<<destination<<endl;
        cout<<"Distance :"<<distance<<endl;
        cout<<"Fuel :"<<fuel<<endl;
    }
};
int main()
{
    fuel a;
    a.feedinfo();
    a.showinfo();
}