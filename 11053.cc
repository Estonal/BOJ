#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[1001];
    int dp[1001] = {0,};
    int i,j;
    int n;
    int maxi = 0;
    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(i=0; i<n; i++)
    {
        maxi = 0;

        for(j=0; j<i; j++)
        {
            if(a[j] < a[i])
                if(dp[j] > maxi)
                    maxi = dp[j];
        }

        dp[i] = maxi + 1;
    }

    printf("%d", *max_element(dp, dp+n));
    return 0;
}
