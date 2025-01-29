#include<iostream>
using namespace std;
int main()
{
    int cp,sp;
    cout<<"Enter cost price ";
    cin>>cp;
    cout<<"Enter selling price ";
    cin>>sp;
    if(cp<sp)
    {
        sp=sp-cp;
        cout<<"Profit is : "<<sp;
    }
    else
    {
        cp=cp-sp;
        cout<<"Loss is : "<<cp;
    }
    if(cp==sp)
    {
        cout<<"No Profit no Loss";
    }
}