#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter a number: ";
    cin>>x;
    for(int i=2;i<=x-1;i++)
    {
        if(x%i==0)
        {
            cout<<x<<" is a composite number. And it's composite numbers are following : "<<endl;
            break;
        }
    }
    for(int i=2;i<=x-1;i++)
    {  
        if(x%i==0)
        {
            cout<<i<<endl;
        }

    }
}