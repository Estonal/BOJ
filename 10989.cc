#include <stdio.h>

int main()
{
    int n;
    int i, j, tmp;
    int a[10001] = {0,};

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &tmp);
        a[tmp]++;
    }

    for(i=0; i<=10000; i++)
    {
        for(j=0; j<a[i]; j++)
            printf("%d\n", i);
    }
    return 0;
}
