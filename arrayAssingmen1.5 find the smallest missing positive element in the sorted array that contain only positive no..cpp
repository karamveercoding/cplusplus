#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	bool flag=false;
		for(int i=0;i<=4;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<=4;i++)
	{
		if(arr[i]!=i+1){
			flag=true;
			cout<<i+1;
			break;
		}
	}
	if(flag==false){
		cout<<"there was no missing element";
	}
}
