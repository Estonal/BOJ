#include <stdio.h>
int main()
{
    int a,b,v;
    double d; // day
    scanf("%d %d %d", &a, &b, &v);
    d = (double)(v-b)/(a-b);                // v >= a*d - b(d-1)에 근거함
    if(d - (v-b)/(a-b) == 0)
        printf("%d", (int)d);
    else
        printf("%d", (int)d + 1);
    return 0;
}
