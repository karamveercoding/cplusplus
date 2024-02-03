#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int x;
	cout<<"enter the target element";
	cin>>x;
	vector<int>v;
	int n;
	cout<<"enter the array size";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		v.push_back(m);
	}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(v[i]+v[j]==x)
				cout<<"("<<i<<","<<j<<")"<<" ";
			}
		}
	}

