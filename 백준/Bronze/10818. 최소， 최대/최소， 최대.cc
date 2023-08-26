#include <iostream>

using namespace std;

int main()
{
    int n,i,a,j;
    //int a[100000];

    int maxi = -1000000;
    int mini = 1000000;
    cin >> n;
    for (i=0;i<n;i++) {
        cin >> a;
        if (a>maxi) {
            maxi = a;
        }
        if (a<mini) {
            mini = a;
        }
    }
    cout << mini << " " << maxi;
}
