#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    long long i;
    long long low, high, mid;
    long long tmp;
    long long num;

    scanf("%lld", &n);
    scanf("%lld", &k);

    low = 1; // min of array
    high = n*n; // max of array

    while(low <= high)
    {
        mid = (low + high) / 2;
        num = 0;

        for(i=1; i<=n; i++)
            num += min(mid/i, n);

        if(num >= k)
        {

            high = mid - 1;
            tmp = mid;

        } else {

            low = mid + 1;

        }
    }

    printf("%lld", tmp);
    return 0;
}
