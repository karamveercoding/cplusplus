#include<iostream>
#include<vector> 
using namespace std;
int main()
{
    int n;
    long int factorial=1;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        factorial= factorial*i;
    }
    cout<<"The factorial is : "<<factorial<<endl;
    return 0;
}
