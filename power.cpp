#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,power=1;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    for(int i=1;i<=b;i++)
    {
        power*=a;
    }
    cout<<"power is : "<<power;
}