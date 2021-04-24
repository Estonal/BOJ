#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x[1001] = {0,};
    int y[1001] = {0,};
    int t1, t2;
    int rx, ry;
    int i;
    for(i=1; i<=3; i++)
    {
        scanf("%d %d", &t1, &t2);
        x[t1]++;
        y[t2]++;
    }

    for(i=1; i<=1000; i++)
    {
        if(x[i] == 1)
            rx = i;

        if(y[i] == 1)
            ry = i;
    }


    printf("%d %d", rx, ry);
    return 0;
}
