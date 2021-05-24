#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int dp[1001] = {0,};
    int a[1001] = {0,};
    int i,j;
    int n;
    int res = 0;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        dp[i] = a[i];
        for(j=0; j<i; j++)
        {
            if(a[i] > a[j] && dp[i] < dp[j] + a[i])
                dp[i] = dp[j] + a[i];
        }

        if(dp[i] > res)
            res = dp[i];
    }
    printf("%d", res);
    return 0;
}
