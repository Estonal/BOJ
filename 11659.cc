#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, m;
    int i, j, k;
    int a[100001] = {0,};
    cin >> n >> m;

    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);


    // 이제 a를 구간합 덩어리로

    for(i=2; i<=n; i++)
        a[i] = a[i-1] + a[i];

    for(k=0; k<m; k++)
    {
        scanf("%d %d", &i, &j);
        printf("%d\n", a[j] - a[i - 1]);
    }
    return 0;
}
