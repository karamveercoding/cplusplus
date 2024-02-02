#include<iostream>
using namespace std;
void square(int n)
{
	for(int i=1;i<=n;i++)
	  {
	  int s=i*i;
	    cout<<"the square of"<<i<<"="<<s<<endl;
	}
}
int main()
{
	int n;
	cout<<"enter the number";
	cin>>n;
	square(n); 
}

