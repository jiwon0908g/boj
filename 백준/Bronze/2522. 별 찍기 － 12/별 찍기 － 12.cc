#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cin >>n;

    for (i=0;i<n;i++) {
        for (j=0;j<n-i-1;j++) {
            cout << " ";
        }
        for (j=0;j<i+1;j++) {
            cout << "*";
        }
        cout << "\n";
    }
    for (i=0;i<n-1;i++) {
        for (j=0;j<i+1;j++) {
            cout << " ";
        }
        for (j=0;j<n-i-1;j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
