#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter any positive number : ";
    cin>>x;
    if(x<0)
    {
        cout<<"Please enter positive number";
        return 0;
    }
    if(x%5==0 && x%3==0)
    {
        cout<<"Yes it is divisible by 5 and 3";
    }
    else{
        cout<<"No it is not divisible by 5 and 3";
    }
    return 0;
}