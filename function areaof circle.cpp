#include<iostream>
using namespace std;
void Area(int r)
{
	float a=3.1415*r*r;
	cout<<"The area of circle is="<<a;
}
int main()
{
	int r;
	cout<<"enter the radius of circle";
	cin>>r;
	Area(r);
}
