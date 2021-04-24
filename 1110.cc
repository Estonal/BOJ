#include <stdio.h>

int main()
{
    int n;
    int temp;
    scanf("%d", &n);
    int cycle = 0;
    temp = n;
    do {
        temp = (temp%10)*10 + (temp/10 + temp%10)%10;
        cycle++;
    } while(n != temp);

    printf("%d", cycle);
    return 0;
}
