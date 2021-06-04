#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int t;
    int i;
    int tmp;
    int a[5] = {0,};
    scanf("%d", &t);
    for(i=0; i<5; i++)
    {
        scanf("%d", &tmp);
        a[tmp]++;
    }

    printf("%d", a[t]);
    return 0;
}
