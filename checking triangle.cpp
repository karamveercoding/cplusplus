#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a character : ";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b)
    {
        cout<<"Yes it is an triangle";
    }
    else
    {
        cout<<"No it not a triangle";
    }
}