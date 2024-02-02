#include<iostream>
using namespace std;
int main(){
	int ar[100];
	cout<<"enter the marks of students";
	for(int i=0;i<10;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<10;i++)
	{
		if(ar[i]<35)
		
			cout<<"the rool number are"<<i;
		
	}
}
