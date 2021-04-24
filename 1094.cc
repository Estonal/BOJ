#include <stdio.h>



int main()
{

    int a[7] = {64, 32, 16, 8, 4, 2, 1}; // 2진수..?
    int s = 0;
    int x, i;
    scanf("%d", &x);
    for(i=0; i<7; i++)
    {
        if(x >= a[i])
        {
            s++;
            x -= a[i];
        }
    }

    printf("%d", s);
    return 0;
}
