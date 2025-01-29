#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter a number";
   cin>>n;
   int t=10;
   int digit=1;
   while(n/=t)
   {
      digit++;
   }
   cout<<digit;
   
}
