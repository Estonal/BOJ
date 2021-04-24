#include <stdio.h>
int main()
{
    int N,F;
    int t;
    int i;
    scanf("%d", &N);
    scanf("%d", &F);
    t = N / 100 * 100;

    for(i=0; i<100; i++)
        if((t + i)%F  == 0)
            break;

    if(i < 10)
        printf("0%d", i);
    else
        printf("%d", i);
    return 0;
}
