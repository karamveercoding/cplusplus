#include<iostream>
using namespace std;
int main()
{
    //Question is to print the flipped star triangle
    /*
        *
       **
      ***
     ****
     */
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";//spaces
        }
        for(int k=1;k<=i;k++)
        {
           cout<<"*";//star
        }
        cout<<endl;
    }
}