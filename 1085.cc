#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x,y,w,h, i;
    int dist;
    int a[4]; // left, right, down, up
    scanf("%d %d %d %d", &x, &y, &w, &h);
    a[0] = x;
    a[1] = abs(w - x);
    a[2] = y;
    a[3] = abs(h - y);
    dist = x;
    for(i=1; i<4; i++)
        if(a[i] < dist)
            dist = a[i];

    printf("%d", dist);
    return 0;
}
