#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k;
    int n,m;
    int w[51][51] = {-1,};
    int s;
    int ex = 0;
    scanf("%d", &n);
    scanf("%d", &m);

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%01d", &w[i][j]);

    s = min(n, m);

    for(i=s; i>=1; i--)
    {
        for(j=0; j<=n-i; j++)
        {
            for(k=0; k<=m-i; k++)
            {
                if(w[j][k] == w[j+i-1][k] && w[j][k] == w[j][k+i-1] && w[j][k] == w[j+i-1][k+i-1])
                {
                    printf("%d", i*i);
                    ex = 1;
                    break;
                }

            }

            if(ex)
                break;
        }

        if(ex)
            break;
    }

    return 0;
}
