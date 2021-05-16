#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int t;
    long long f[10001];
    long long p, q;
    int i, j;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld", &p, &q);
        f[1] = 1%q;
        f[2] = 1%q;

        for(j=3; j<=p; j++) {
            f[j] = (f[j-1] + f[j-2])%q;
        }
        printf("Case #%d: %lld\n", i, f[p]);
    }

    return 0;
}
