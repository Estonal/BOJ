#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[1001] = {0,};
    int s[1000001] = {0,};
    int k = 0;
    int t, n, i, j;

    scanf("%d", &t);

    while(t--) {
        k = 0;
        scanf("%d", &n);
        for(i=1; i<=n; i++)
            scanf("%d", &a[i]);
        for(i=1; i<=n; i++)
            a[i] = a[i-1] + a[i]; // make sumarray

        for(i=1; i<=n; i++) // pos i
            for(j=i; j<=n; j++) // pos j
                s[k++] = a[j] - a[i-1]; // several subsum
        printf("%d\n", *max_element(s, s+k));
    }
    return 0;
}
