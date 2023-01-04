#include<iostream>
using namespace std;
template <class T>
void display(T t1)
{
    cout<<"displaying template :"<<t1<<endl;
};
template<class x,class y>
void display(x a,y b)
{
    cout<<"displaying template :"<<a<<"\t"<<b<<endl;  
}
int main()
{
    display(200);
    display(12.56);
    display('G');
    display('G',1.25);
    display('X',25);
    display(25,1.25);
    
  
    
}