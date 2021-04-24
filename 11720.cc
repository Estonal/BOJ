#include <stdio.h>
int main()
{
    int n;
    int i;
    int temp;
    int sum=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%1d", &temp);
        sum += temp;
    }

    printf("%d", sum);
    return 0;
}
