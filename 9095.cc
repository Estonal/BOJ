#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    int i;
    int dp[12] = {0,};
    dp[0] = 0;
    dp[1] = 1; // 1
    dp[2] = 2; // 1+1, 2
    dp[3] = 4; // 1+1+1, 1+2, 2+1, 3
    // dp[n] = dp[n-1] + dp[n-2] + dp[n-3];

    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(i = 4; i <= n; i++)
        {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        printf("%d\n", dp[n]);
    }
    return 0;
}
