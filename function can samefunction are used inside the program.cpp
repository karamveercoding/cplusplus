#include<iostream>
using namespace std;
void sum(float n)
{
	int s=0;                              //YES THE SAME FUNCTION NAME USED FOR DIFFRENT FUNCTION WITHOUT ANY CONFLICT
	                                      //BUT CONDITION IS THE ARGUMENT DATA TYPE MUST BE DIFFRENT. 
	s=n+n;
	cout<<"sum is"<<s;
}
void sum(int n)
{
	int a=0;
	a=n+n;
	cout<<"the sub is"<<a;
}
int main()
{
	int n;
	cout<<"enter any number";
	cin>>n;
	sum(n);
}
