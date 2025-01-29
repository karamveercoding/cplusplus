#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number";
    cin >> a;
    if (a > 99 && a < 1000)
        cout << "It is a three digit number" << a;
    }
    else
    {
        cout << "No this is not a three digit number";
    }
}