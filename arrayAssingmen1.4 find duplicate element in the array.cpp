#include<iostream>
using namespace std;
int main()
{
	int ar[5]={1,2,3,4,9};
	bool flag=false;
	
	for(int i=0;i<=4;i++)
	{
		for(int j=1;j<=4;j++)
		{
			if(ar[i]==ar[j])
			{
			flag=true;
			break;
		     }
		}
		if(flag==true)
		break;
	}
	if(flag==true)
	{
	 cout<<"yes the array contain duplicate value";
    }       
	else
	{
	cout<<"the arrray contain no duplicate value";
    }
}
