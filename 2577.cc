#include <stdio.h>
int main()
{
    int a,b,c;
    int i;
    scanf("%d\n%d\n%d", &a,&b,&c);
    int res = a*b*c;
    int num[10] = {0};

    while(res != 0)
    {
        num[res%10]++;
        res /= 10;
    }

    for(i=0; i<=9; i++)
        printf("%d\n", num[i]);


    return 0;
}
