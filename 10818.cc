#include <stdio.h>
int main()
{
    int i, n;
    int min = 0;
    int max = 0;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > arr[max])
            max = i;
        if(arr[i] < arr[min])
            min = i;
    }

    printf("%d %d", arr[min], arr[max]);

    return 0;
}
