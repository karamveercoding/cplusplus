#include<iostream>
using namespace std;
int main(){
	int ar[5],n,i;
     cout<<"enter the array element";
     
	for( i=0;i<5;i++)
	{
		cin>>ar[i];
	}
	cout<<"enter the number that you want to search in the array";
	cin>>n;
	//here we use check mark to print the else statement.
	bool flag=false;
	for(i=0;i<5;i++)
	{
		if(ar[i]==n)
		{
		flag=true;
	}	
	}
	if(flag==true)
	cout<<"element is present";
	else
	{
		cout<<"sorry element is not present";
	}
}
