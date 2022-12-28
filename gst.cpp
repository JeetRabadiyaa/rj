#include<iostream>
using namespace std;
int main()
{
    int rate,qty,amt; 
    float dis,gst,netbill,billamt;
    cout<<"enter rate :- ";
    cin>>rate;
    cout<<"enter qty :- ";
    cin>>qty;

    amt = rate*qty;
    dis = amt*0.05;
    billamt = amt-dis;
    gst = billamt*0.18;
    netbill = billamt+gst;

    cout<<"\nrate\tqty\tamt\tdis\tbillamt\tgst\tnetbill""\n"<<rate<<"\t"<<qty<<"\t"<<amt<<"\t"<<dis<<"\t"<<billamt<<"\t"<<gst<<"\t"<<netbill;
} 