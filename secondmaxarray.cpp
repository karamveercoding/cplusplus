#include<iostream>
using namespace std;
int main()
{
	int smax=0,max,ar[5];
	cout<<"enter the array element ";
	for(int i=0;i<=4;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<=4;i++)
	{
		max=ar[0];
		if(ar[i]>max)
		{
		max=ar[i];
	}
	else
	if(ar[i]!=max&&smax<ar[i])
	{
	smax=ar[i];
}
	}
	
	cout<<"second max is"<<max;
}
