#include<iostream>
using namespace std;
class student 
{
    public:
    int maths,eng,sci,total;
    string name;
    student()
    {
        cout<<"Enter student name :";
        cin>>name;
        cout<<"Enter maths marks :";
        cin>>maths;
        cout<<"Enter english marks :";
        cin>>eng;
        cout<<"Enter science marks :";
        cin>>sci;
    }
    void showdata()
    {
        total = maths + eng + sci;
          cout<<"Name :"<<name<<endl;
        cout<<"Maths :"<<maths<<endl;
        cout<<"English :"<<eng<<endl;
        cout<<"Science :"<<sci<<endl;
        cout<<"Total :"<<total<<endl;
    }
};
int main()
{
    student a;
    a.showdata();
}

    