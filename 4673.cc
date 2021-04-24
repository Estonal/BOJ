#include <stdio.h>

int d(int n) {
    int sum = n;
    while(1) {
        sum += n%10;
        n /= 10;
        if(n == 0) break;
    }

    return sum;
}

int main()
{
    int arr[10001] = {0};
    int i;
    int temp;
    for(i=1; i<10001; i++) {
        temp = d(i);
        if(temp < 10001)
            arr[temp] = 1;
    }

    for(i=1; i<10001; i++)
        if(arr[i] == 0)
            printf("%d\n", i);

    return 0;
}
