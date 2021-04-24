#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int i, j, k, n, large = 0;
    int m = 0;
    int a[100];
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(i=0; i<n-2; i++)
    {
        for(j=i+1; j<n-1; j++)
        {
            for(k=j+1; k<n; k++)
            {
                if(a[i] + a[j] + a[k] > large && a[i] + a[j] + a[k] <= m)
                    large = a[i] + a[j] + a[k];
            }
        }
    }
    printf("%d", large);

    return 0;
}
