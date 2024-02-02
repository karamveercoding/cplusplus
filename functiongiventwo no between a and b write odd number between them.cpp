#include<iostream>
using namespace std;
void odd(int a,int b)
{
	for(int i=a;i<=b;i++)
	{
		if(i%2!=0)
		{
			cout<<i<<endl;
		}
		else
		{
		cout<<"enter correct value";
	}
	
	}
}
int main()
{
	int a,b;
	cout<<"enter the value of a and b";
	cin>>a>>b;
	odd(a,b);
}
