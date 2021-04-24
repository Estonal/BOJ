#include <stdio.h>
int main()
{
    int i,n;
    int prev = 0;
    int pres;
    int res = 0;
    int a[100];
    scanf("%d", &n);

    for(i=0; i<n; i++) {
            scanf("%d", &a[i]);
    }

    for(i=n-1; i>=0; i--)
    {
        pres = a[i];
        if(i!=n-1)
        {
            if(prev <= pres) {
                res += pres - prev + 1;
                pres = prev - 1;
            }
        }
        prev = pres;
    }
    printf("%d", res);
    return 0;
}
