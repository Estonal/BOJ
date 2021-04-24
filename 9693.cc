#include <stdio.h>

int main()
{
    int i = 1;
    int n;
    while(1) {
        scanf("%d", &n);
        if(n != 0)
        {
            //1~N 사이에 2와 5의 조합이 몇개 있느냐!!
            printf("Case #%d: %d\n", i++, n/5 + n/25 + n/125 + n/625 + n/3125 + n/15625 + n/78125 + n/390625);


        } else break;
    }
    return 0;
}
