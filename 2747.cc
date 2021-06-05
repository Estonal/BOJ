#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    int a[91] = {0,};
    a[1] = 1;
    scanf("%d", &n);
    for(i=2; i<=n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    printf("%d", a[n]);
}