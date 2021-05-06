#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, i;
    int a[1001] = {1,};

    a[1] = 1;
    a[2] = 2;

    cin >> n;
    for(i=3; i<=n; i++)
    {
        a[i] = (a[i-1] + a[i-2])%10007;
    }
    printf("%d", a[n]);
    return 0;
}
