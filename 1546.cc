#include <stdio.h>
int main()
{
    int i,n;
    int max = 0;
    scanf("%d", &n);
    int arr[n];
    double sum = 0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if( max < arr[i] )
            max = arr[i];
    }

    for(i=0; i<n; i++)
    {
        sum += (double)arr[i] / max * 100;
    }

    printf("%lf", (double)sum/n);


    return 0;
}
