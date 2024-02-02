#include<iostream>
using namespace std;
int main()
{
	int ar[5],min=0;
	cout<<"enter the elements of array";
	for(int i=0;i<=4;i++)
	{
		cin>>ar[i];
		min=ar[0];
	}
	for(int i=0;i<=4;i++)
	{
		if(min>ar[i])
		{
			min=ar[i];
		}
	}
	cout<<"the min is "<<min;
}
