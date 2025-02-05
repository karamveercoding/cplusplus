#include<iostream>
using namespace std;
int main()
{
    int n,x=2;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i*x;j=j+2)
        {
            cout<<j;
        }
        cout<<endl;
    }
}