#include <iostream>
#include <stdio.h>

using namespace std;

int res(int a)
{
    int i, tmp;
    int num = 0;
    int result = 1;
    int arr[5];
    tmp = a;
    while(tmp != 0) {
        arr[num] = tmp%10;
        tmp /= 10;
        num++;
    }

    for(i=0; i<(num/2+1); i++)
        if(arr[i] != arr[num-i-1])
            result = 0;

    return result;
}

int main()
{
    int n;
    scanf("%d", &n);

    while(n != 0)
    {
        if(res(n))
            printf("yes\n");
        else
            printf("no\n");

        scanf("%d", &n);

    }
    return 0;
}
