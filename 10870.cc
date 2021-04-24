#include <iostream>
#include <stdio.h>

using namespace std;

int pibo(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return pibo(n-1) + pibo(n-2);
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", pibo(a));
}
