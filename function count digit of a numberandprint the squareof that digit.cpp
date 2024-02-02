#include<iostream>
using namespace std;
void count(int n)
{
	int c=0;
	while(n>0)
	{
		n=n/10;
		c++;
	}
	cout<<"After counting the digits the square is="<<c*c;
}
int main()
{
	int n;
	cout<<"enter the number";
	cin>>n;
	count(n);
}
