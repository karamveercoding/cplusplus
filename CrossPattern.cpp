#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j || j==(n+1)-i) {
                cout << "*";
            } else {
                cout << " ";  // Single space for alignment
            }
        }
        cout << endl;
    }
    return 0;
}
