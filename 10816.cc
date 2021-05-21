#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[20000002] = {0,};
    int n, m;
    int i;
    int tmp;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&tmp);
        a[tmp + 10000000]++;
    }
    scanf("%d", &m);
    for(i=0; i<m; i++) {
        scanf("%d", &tmp);
        printf("%d ", a[tmp + 10000000]);
    }
    return 0;
}
