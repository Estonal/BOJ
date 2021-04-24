#include <stdio.h>
int main()
{
    int a[10];
    int b[10];
    int aw = 0;
    int bw = 0;
    int i;
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<10; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i=0; i<10; i++) {
        if(a[i] > b[i])
            aw++;
        else if(a[i] < b[i])
            bw++;
    }

    if(aw > bw)
        printf("A");
    else if(aw < bw)
        printf("B");
    else
        printf("D");
    return 0;
}
