#include <stdio.h>

int nineNum(int n) {
    int num = 0;
    while(n > 0) {
    if(n%10 == 9)
        num++;
    n /= 10;
    }

    return num;
}

int main()
{
    int n,m, i, j;
    int max = 0;
    int a[500][500];
    int sum1[500] = {};
    int sum2[500] = {};
    int totalsum = 0;
    scanf("%d %d", &n, &m);

    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            sum1[i] += nineNum(a[i][j]);

        }
    }

    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            sum2[i] += nineNum(a[j][i]);
        }
    }

    for(i=0; i<n; i++) {
        totalsum += sum1[i];
        if(max < sum1[i])
            max = sum1[i];
    }

    for(i=0; i<m; i++) {
        if(max < sum2[i])
            max = sum2[i];
    }

    printf("%d", totalsum - max);
    return 0;
}
