#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int i;
    int sum1 = 0;
    int sum2 = 0;
    int tmp;
    for(i=0; i<4; i++)
    {
        scanf("%d", &tmp);
        sum1 += tmp;
    }

    for(i=0; i<4; i++)
    {
        scanf("%d", &tmp);
        sum2 += tmp;
    }

    if(sum1 >= sum2)
        printf("%d", sum1);
    else
        printf("%d", sum2);
    return 0;
}
