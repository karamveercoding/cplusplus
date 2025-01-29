#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter character :";
    cin>>ch;
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        cout<<"Yes it is a character";
    }
    else
    {
        cout<<"No it is not a character";
    }
}