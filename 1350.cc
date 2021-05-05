#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    long long int n;
    long long int a[1000];
    int i;
    long long int f;
    long long int ans = 0;

    scanf("%lld", &n);

    for(i=0; i<n; i++)
        scanf("%lld", &a[i]);
    scanf("%lld", &f);


    for (i = 0; i < n; i++) {
        if (a[i] > 0 && a[i] <= f) ans++;
        else if (a[i] > f) {

            if (a[i] % f == 0)
                ans += a[i] / f;
            else
                ans += (a[i] / f) + 1;
        }
    }

    printf("%lld", ans*f);
    return 0;
}
