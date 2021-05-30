#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int i;
    int a[51];
    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    sort(a, a+n);

    printf("%d", a[0]*a[n-1]);
    return 0;
}
