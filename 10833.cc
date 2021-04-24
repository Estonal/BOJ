#include <stdio.h>

int main()
{
    int t;
    int a, b;
    int sum = 0;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &a, &b);
        sum += b - ((b / a)*a);

    }
    printf("%d", sum);
    return 0;
}
