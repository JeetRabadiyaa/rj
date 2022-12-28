#include<iostream>
using namespace std;
class bname
{
    int bcode,innigs,notout,runs,batavg;
    string bname;

    float calcavg()
    {
        return runs/(innigs-notout);
    }
    public:
    void readdata()
    {
        cout<<" enter  value of battingcode :";
        cin>>bcode;
        cout<<" enter batting name :";
        cin>>bname;
        cout<<" enetr innigs :";
        cin>>innigs;
        cout<<"Enter notout score :";
        cin>>notout;
        cout<<"Enter runs :";
        cin>>runs;
    }
    void display()
    {
        cout<<"Enter value of batting code :"<<bcode<<endl;
        cout<<"Enter innigs :"<<innigs<<endl;
        cout<<"Enter notout :"<<notout<<endl;
        cout<<"Enter runs :"<<runs<<endl;
    }
};
int main()
{
    bname a;
    a.readdata();
    a.display();

}


    
