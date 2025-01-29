#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three number :";
    cin>>a>>b>>c;
    if(a==b && a==c && b==a && b==c && c==a && c==b)
    {
        cout<<"sorry no one is greater all are equal";
        
    }
    else
    if(a>b && a>c)
    {
        cout<<"a is greatest";
    }
    else
    if(b>c && b>a)
    {
        cout<<"b is greatest";
    }
    else
    if(c>a && c>b)
    {
        cout<<"c is greatest";
    }
}