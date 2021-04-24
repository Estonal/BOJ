#include <stdio.h>
int main()
{
    int arr[10];
    int nameoji[42] = {0};
    int i;
    int temp = 0;
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
        nameoji[arr[i]%42]++;
    }

    for(i=0; i<42; i++) {
        if(nameoji[i] != 0)
            temp++;
    }

    printf("%d", temp);

    return 0;
}
