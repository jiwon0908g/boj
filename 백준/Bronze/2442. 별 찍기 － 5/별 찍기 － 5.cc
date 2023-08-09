#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cin >> n;

    for (i=0;i<n;i++) {
        for (j=1;j<n-i;j++) {
            cout << " ";
        }
        for (j=0;j<2*i+1;j++) {
            cout << "*";
        }
        cout << "\n";
    }
}


//n  i  n-i   *
//5  0   5    1
//5  1   4    3
//5  2   3    5
