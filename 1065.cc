#include <stdio.h>

int dungcha(int n)
{
    if(n/100 == 0) return 1;

    int d = n%10 - (n/10)%10;
    while(n/10 != 0) {
        if(d == n%10 - (n/10)%10)
            n /= 10;
        else
            return 0;
    }
    return 1;
}

int main()
{
    int i,n;
    int num = 0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        if(dungcha(i) == 1)
            num++;
    printf("%d", num);
    return 0;
}
