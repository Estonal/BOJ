#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, k;
    int i, j;
    int w, v;
    int dp[100000001] = {0,};
    int res = 0;
    scanf("%d", &n);
    scanf("%d", &k);

    for(i=0; i<n; i++)
    {
        scanf("%d", &w); // Weight
        scanf("%d", &v); // Value

        for(j = k; j >= 0; j--)
        {

            if(dp[j] != 0 && j + w <= k)
            {
                dp[j + w] = max(dp[j + w], dp[j] + v);
                res = max(res, dp[j + w]);
            }
        }

        if(w > k)
            continue;
        dp[w] = max(dp[w], v);
        res = max(res, dp[w]);
    }

    printf("%d", res);

    return 0;
}
