#include<iostream>
using namespace std;
void add()
{
    int a,b;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
    cout<<"addtion a in b :"<<a+b;
}

void multiplication()
{
    int a,b;
    cout<<"\n enter a :";
    cin>>a;
    cout<<" enter b :";
    cin>>b;
    cout<<"mutiplication a in b :-"<<a*b;
}

void division()
{
    int a,b;
    cout<<"\nenter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
    cout<<"division a in b :"<<a/b;
}

void substration()
{
    int a,b;
    cout<<"\nenter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
    cout<<"substraion a in b :"<<a-b;
}

int main()
{
    add();
    multiplication();
    division();
    substration();
}


