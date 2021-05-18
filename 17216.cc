#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a[1001];
    int dp[1001] = {0,};
    int i,j;
    int tmp = 0;

    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(i=0; i<n; i++)
    {
        tmp = 0;

        for(j=0; j<i; j++)
        {
            if(a[i] < a[j])
            {
                if(tmp < dp[j])
                    tmp = dp[j];
            }
        }

        dp[i] = a[i] + tmp;
    }

    printf("%d", *max_element(dp, dp+n));
    return 0;
}
