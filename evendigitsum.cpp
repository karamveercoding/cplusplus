#include<iostream>
using namespace  std;
int main()
{
    int n,sum=0,digit;
    cout<<"Enter the number : ";
    cin>>n;
    while(n>0)
    {
    digit = n%10;
    n/=10;
    if(digit%2==0)
    {
        sum = sum+digit;
    }
    }
    cout<<"The sum even digit is : "<<sum;
}