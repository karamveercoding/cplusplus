#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int a = 1,Fabonacci = 1,sum = 0;
    for(int i=1;i<=n-2;i++)
    {
        sum = a + Fabonacci;
        a = Fabonacci;
        Fabonacci = sum;
    }
    cout<<Fabonacci;
}