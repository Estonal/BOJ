#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, k;
    int i;
    int sum1 = 1;
    int sum2 = 1;
    int sum3 = 1;

    scanf("%d", &n);
    scanf("%d", &k);

    for(i=1; i <= n; i++)
        sum1 *= i;
    for(i=1; i<=n-k; i++)
        sum2 *= i;
    for(i=1; i<=k; i++)
        sum3 *= i;

    printf("%d", sum1/sum2/sum3);
    return 0;
}
