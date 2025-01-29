#include<iostream>
using namespace std;
int main()
{
    int n;
    bool flag=true; // means prime
    cout<<" enter the number : ";
    cin>>n;
    if(n==1) 
    {cout<<"1 is neither prime nor composite : ";
     return 0;
    }
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
           flag=false;
            break;
        }
        
    }
    if(flag==true) cout<<"Yes it  is a prime number : ";
    else cout<<"NO it is not a prime number : ";
}