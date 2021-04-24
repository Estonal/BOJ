#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int chk[246913];
    int n;
    int i, j;
    int t;
    for(i=2; i<=246912; i++)
        chk[i] = 1;
    for(i=2; i*i <= 246912; i++)
    {
        for(j=i*2; j<=246912; j += i)
        {
            chk[j] = 0;
        }
    }

    while(1) {
        t = 0;
        scanf("%d", &n);
        if(n==0) break;
        for(i=n+1; i<=2*n; i++)
            t += chk[i];
        printf("%d\n", t);
    }

    return 0;
}
