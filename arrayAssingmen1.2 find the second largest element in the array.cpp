#include<iostream>
using namespace std;
int main()
{
	int ar[5],max=0,smax=0;
	cout<<"enter the elements";
	for(int i=0;i<=2;i++)
	{
		cin>>ar[i];
		max=ar[0];
	}
	for(int i=0;i<=2;i++)
	{
		if(ar[i]>max)
		{
		smax=max;
		max=ar[i];
	}
	else
	{
		smax=max(smax,ar[i]);
	}
	}
	cout<<"the second max element in array in one pass "<<smax;
	
}

