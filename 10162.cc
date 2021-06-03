#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int t;
    int a = 300;
    int b = 60;
    int c = 10;
    int na = 0;
    int nb = 0;
    int nc = 0;

    scanf("%d", &t);
    if(t%10 != 0)
        printf("-1");
    else
    {
        while(t != 0)
        {
            if(t >= a)
            {
                t -= a;
                na++;
            } else if(t >= b) {
                t -= b;
                nb++;
            } else {
                t -= c;
                nc++;
            }
        }
        printf("%d %d %d", na, nb, nc);
    }


    return 0;
}
