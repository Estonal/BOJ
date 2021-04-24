#include <stdio.h>
int main()
{
    int a[5];
    int i, s=0;
    for(i=0; i<5; i++) {
        scanf("%d", &a[i]);
        s += a[i]*a[i];
    }

    printf("%d", s%10);
    return 0;
}
