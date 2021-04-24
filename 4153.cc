#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int a[3];
    while(1) {
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        sort(a, a+3);
        if(a[0] == 0 && a[1] == 0 && a[2] == 0)
            break;

        if((double)a[2]*a[2] == (double)a[0]*a[0] + (double)a[1]*a[1])
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
