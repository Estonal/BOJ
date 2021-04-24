#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    int i, j;
    int sum = 0;
    int swit;
    int tmp;
    scanf("%d", &n);
    swit = 1;
    for(i=1; i<=1000000 && i <= n; i++)
    {
        sum = i;
        tmp = i;
        for(j=1; j <= 7; j++)
        {
            sum += tmp%10;
            tmp /= 10;

        }
        if(n == sum)
        {
            printf("%d", i);
            swit = 0;
            break;
        }
    }
    if(swit)
        printf("0");
    return 0;
}
