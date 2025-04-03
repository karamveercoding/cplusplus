#include<iostream>
using namespace std;
int main()
{/*  Question is to print the following pattern 
       ****
      ****
     ****
    ****
     */
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=n;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}