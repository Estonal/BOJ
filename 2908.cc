#include <stdio.h>
int main()
{
    int a[3], b[3];
    scanf("%1d%1d%1d %1d%1d%1d", &a[2], &a[1], &a[0], &b[2], &b[1], &b[0]);
    if(100*a[0] + 10*a[1] + a[2] > 100*b[0] + 10*b[1] + b[2])
        printf("%d", 100*a[0] + 10*a[1] + a[2]);
    else
        printf("%d", 100*b[0] + 10*b[1] + b[2]);
    return 0;
}
