#include<iostream>
using namespace std;
int main()
{
	int max,ar[5];
	cout<<"enter the elements of array";
	for(int i=0;i<=4;i++)
	{
		cin>>ar[i];
	}
		max=ar[0];
	for(int i=0;i<=4;i++)
	{
	
	
		if(ar[i]>max)
		{
		max=ar[i];
	}
}
	cout<<"largest element in array is "<<max;
}
