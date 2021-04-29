#include <iostream>
#include <stdio.h>

using namespace std;

int gcd(int a, int b)
{
    int tmp, n;
    if(a < b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    while(b != 0)
    {
        n = a%b;
        a = b;
        b = n;
    }

    return a;
}

int main()
{
    int a,b, gc;
    scanf("%d %d", &a, &b);
    gc = gcd(a,b);
    printf("%d\n", gc);
    printf("%d\n", a*b/gc);
    return 0;
}
