#include <stdio.h>
int main()
{
    int a[8];
    int ascend = 0;
    int descend = 0;
    int i;
    int tmp;
    for(i=0; i<8; i++)
    {
        scanf("%d", &a[i]);
        if(i != 0) {
            ((a[i] - tmp > 0) ? ascend : descend)++;
        }
        tmp = a[i];
    }

    if(ascend && !descend)
        printf("ascending");
    else if(!ascend && descend)
        printf("descending");
    else
        printf("mixed");
    return 0;
}
