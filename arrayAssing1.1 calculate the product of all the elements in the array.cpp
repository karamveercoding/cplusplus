#include<iostream>
using namespace std;
int main()
{
	int ar[5],p=1;
	cout<<"enter the elements of array";
	for(int i=0;i<=4;i++)
	{
		cin>>ar[i];
	 p=p*ar[i];
	}
	cout<<"the product of entered elements is"<<p;
}
