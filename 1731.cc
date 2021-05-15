#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, i;
    int a[52];
    int d;
    cin >> n;
    for(i=0; i<n; i++)
        cin >> a[i];

    if(a[2] - a[1] == a[1] - a[0]) {

        d = a[2] - a[1];
        a[n] = a[n-1] + d;
        printf("%d",  a[n]);

    } else if((double)a[2]/a[1] == (double)a[1]/a[0]) {

        d = a[2]/a[1];
        a[n] = a[n-1]*d;
        printf("%d",  a[n]);
    }

    return 0;
}
