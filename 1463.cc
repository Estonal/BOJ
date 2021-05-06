#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    int a[1000001] = {0,};
    cin >> n;

    a[1] = 0;
    a[2] = 1;
    a[3] = 1;

    for(i=4; i <= n; i++) {
        a[i] = a[i-1] + 1; // reverse
        if(i%2 == 0)
            a[i] = min(a[i], a[i/2] + 1);
        if(i%3 == 0)
            a[i] = min(a[i], a[i/3] + 1);
    }

    printf("%d", a[n]);
    return 0;
}
