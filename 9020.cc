#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int chk[10001];
    int n;
    int i, j;
    int t;
    for(i=2; i<=10000; i++)
        chk[i] = 1;
    for(i=2; i*i <= 10000; i++)
    {
        for(j=i*2; j<=10000; j += i)
        {
            chk[j] = 0;
        }
    }

    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(i=0; i<=(n/2)-1; i++) {
            if(chk[n/2 - i] && chk[n/2 + i]) {
                printf("%d %d\n", n/2 - i, n/2 + i);
                break;
            }
        }

    }

    return 0;
}
