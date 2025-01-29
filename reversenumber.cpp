#include<iostream>
using namespace std;
int main()
{
    int n,reverse=0,t=10;
    cout<<"Enter the number : ";
    cin>>n;
    while(n>0)
    {
        int lastdigit=n%t;  // calculate the last digit
        reverse=reverse*10+lastdigit;  //
        n/=t;
    }
    cout<<reverse;
}