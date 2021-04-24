#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n, a, i, j;
    double l;
    int yak=1;
    int num = 0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a);
        if(a > 1) {
            l = sqrt((double)a);
            for(j=2; j<=l && yak == 1; j++)
                if(a%j == 0)
                    yak++;
            if(yak == 1)
                num++;
            yak = 1;
        }
    }

    printf("%d", num);
    return 0;
}
