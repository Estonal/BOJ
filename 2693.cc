#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a[10];
    int i;

    scanf("%d", &n);
    while(n--) {
        for(i=0; i<10; i++)
            scanf("%d", &a[i]);
        sort(a, a + 10);
        printf("%d\n", a[7]);
    }

    return 0;
}
