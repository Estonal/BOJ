#include <stdio.h>

int roomNum(int k, int n) { //Recursion!
    int i;
    int sum = 0;
    if(k == 0)
        return n;

    for(i=1; i<=n; i++)
        sum += roomNum(k-1, i);

    return sum;
}

int main()
{
    int t;
    int k,n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &k, &n);
        printf("%d\n", roomNum(k,n));
    }
    return 0;
}
