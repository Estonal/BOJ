#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int m,n;
    double l;
    int i, j;
    int yak=1;
    int mini = 10000;
    int sum = 0;
    scanf("%d %d", &m, &n);
    for(i=m; i<=n; i++)
    {

        if(i > 1) {
            l = sqrt((double)i);

            for(j=2; j<=l && yak == 1; j++)
                if(i%j == 0)
                    yak++;

            if(yak == 1)
            {
                if(sum == 0)
                    mini = i;
                sum += i;
            }
            yak = 1;
        }
    }


    if(sum == 0)
        printf("-1");
    else
        printf("%d\n%d", sum, mini);
    return 0;
}
