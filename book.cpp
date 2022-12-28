#include<iostream>
using namespace std;
class book{
    private:
    int bookno,n;
    string booktitle;
    float price,totalcost;
    float total_cost(int num)
    {
        return price * num;
    }
    public:
    void input()
    {
        cout<<"Enter book no :";
        cin>>bookno;
        cout<<"Enter booktitle :";
        cin>>booktitle;
        cout<<"Enter price :";
        cin>>price;
    }
    void purchase()
    {
        cout<<"Enter number of copies :";
        cin>>n;
        totalcost = total_cost(n);
    }
    void displaydate()
    {
        cout<<"Book no :"<<bookno<<endl;
        cout<<"Book title :"<<booktitle<<endl;
        cout<<"Price :"<<price<<endl;
        cout<<"Number of copies :"<<n<<endl;
        cout<<" Total cost :"<<totalcost<<endl;
    }
};

int main()
{
    book a;
    a.input();
    a.purchase();
    a.displaydate();
}