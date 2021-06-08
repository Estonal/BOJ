#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int dp[10000001];
    int n, i;
    scanf("%d", &n);
    dp[1] = 5;

    for(i=2; i<=n; i++)
    {
        dp[i] = dp[i-1]%45678 + (i+1) + (i) + (i);
    }

    printf("%d", dp[n]%45678);
    return 0;
}
