#include<iostream>
using namespace std;
int main()
{
    int n,t=10,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    int m=0;
    while(n>0)
    {
        int r=n%t;   // calculate the last digit 
        sum= sum+r;  // Adding the last digit 
        n=n/t;     
        m++;
    }
    cout<<"the sum of all digits is: "<<sum;
    return 0;
}