#include<iostream>
using namespace std;
int main()
{
	int ar[5],count=0,n;
	cout<<"enter the elements ";
	cin>>n;
	cout<<"enter the elements array";
	for(int i=0;i<=4;i++)
	{
		cin>>ar[i];
		if(ar[i]>n)
		count++;
	}
	cout<<"the number  greater are "<<count;
	
}
