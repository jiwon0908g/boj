#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cin >> n;


    for (i=0;i<n-1;i++) {
        for (j=1;j<n-i;j++) {
            cout << " ";
        }
        for (j=0;j<2*i+1;j++) {
            cout << "*";
        }
        cout << "\n";
    }
    for (i=0;i<n;i++) {
        for (j=0;j<i;j++) {
            cout << " ";
        }
        for (j=0;j<2*(n-i)-1;j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

