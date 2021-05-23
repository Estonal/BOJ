#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int i, k;
    int a[1000001];
    int b[1000001];
    int c[1000001];
    int mid, f, l;
    k = 0;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    sort(a, a+n);

    for(i=0; i<n; i++)
    {
        if(i == 0)
            c[k++] = a[i];
        else if(c[k-1] != a[i])
            c[k++] = a[i];
    }
    // c is also sorted

    for(i=0; i<n; i++)
    {
        // Binary search, O(nlogn)
        f = 0;
        l = k-1;
        mid = (f + l) / 2;

        while(l - f >= 0) {
            if(c[mid] == b[i]) {
                printf("%d ", mid);
                break;
            } else if(c[mid] < b[i]) {
                f = mid + 1;
            } else {
                l = mid - 1;
            }
            mid = (f + l) / 2;
        }

    }
    return 0;
}
