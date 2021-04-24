#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%1d%1d%1d %1d%1d%1d", &a, &b, &c, &d, &e, &f);
    printf("%d\n", c*f + 10*b*f + 100*a*f);
    printf("%d\n", c*e + 10*b*e + 100*a*e);
    printf("%d\n", c*d + 10*b*d + 100*a*d);
    printf("%d", (100*a + 10*b + c)*(100*d + 10*e + f));
    return 0;
}
