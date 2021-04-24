#include <stdio.h>
int main()
{
    int i;
    int max = 0;
    int arr[9];
    for(i=0; i<9; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > arr[max])
            max = i;
    }

    printf("%d\n%d", arr[max], max+1);

    return 0;
}
