#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int i,j;
	unsigned long long dp[100][2] = { 0, };
	unsigned long long res = 0;

	scanf("%d", &n);

	dp[1][0] = 0;
	dp[1][1] = 1;

	for (i = 2; i <= n; i++)
	{
	    dp[i][0] = dp[i-1][0] + dp[i-1][1];
	    dp[i][1] = dp[i-1][0];
	}

	res = dp[n][0] + dp[n][1];

	cout << res<< endl;
	return 0;
}
