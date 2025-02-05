#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<" * ";
        for(int j=1;j<=n-i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}