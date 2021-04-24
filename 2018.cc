#include <stdio.h>
int main()
{
    int i;
    int a;
    int n = 0;
    scanf("%d", &a);
    for(i=1; i*(i+1)/2 <= a; i++)
    {
        if((a - i*(i+1)/2)%i == 0)
        n++;
    }
    printf("%d", n);
    return 0;
}
