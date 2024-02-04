#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of the array";
	cin>>n;
	int ar[n],a[n],b[5];
	cout<<"enter the elements of the array";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
    }
	for(int i=n-1;i>=0;i--)
	{
	
			b[i]=ar[i];
			cout<<b[i]<<endl;
		
	}
}
