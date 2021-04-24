#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int chk[1000001]; //최대 1000000까지 -> 1000*1000 = 1000000 여기까지 만들기
    int i,j;
    int m,n;

    scanf("%d %d", &m, &n);

    for(i=2; i<=n; i++) {
        chk[i] = 1;
    }

    for(i=2; i*i<=n; i++) {
        for(j = i*2; j<=n; j+=i)
            chk[j] = 0;
    }

    for(i=m; i<=n; i++)
    {
        if(chk[i])
            printf("%d\n", i);
    }

    return 0;
}
