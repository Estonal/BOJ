#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int i,j;
    int dp[1001][3] = {0,};
    int h[1001][3]; // R,G,B
    int f;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &h[i][0]); // R
        scanf("%d", &h[i][1]); // G
        scanf("%d", &h[i][2]); // B
    }

    for(i=1; i<=n; i++)
    {
        if(i == 1)
        {
            dp[i][0] = h[i][0];
            dp[i][1] = h[i][1];
            dp[i][2] = h[i][2];
            continue;
        }

        for(j=0; j<=2; j++)
            dp[i][j] += min(dp[i-1][(j+1)%3], dp[i-1][(j+2)%3]) + h[i][j];

    }

    printf("%d", min(min(dp[n][0], dp[n][1]), dp[n][2]));



    return 0;
}
