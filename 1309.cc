#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int i;
    int t = 2;
    int dp[100001] = {0,};
    scanf("%d", &n);
    dp[0] = 0;
    dp[1] = 3; //{0,0}, {1,0}, {0,1}

    for(i=2; i<=n; i++)
    {
        dp[i] = dp[i-1]%9901 + 2*t%9901;
        t = dp[i-1] + t;
    }

    printf("%d", dp[n]%9901);
    return 0;
}
