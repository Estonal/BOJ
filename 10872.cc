#include <iostream>
#include <stdio.h>

using namespace std;

int factorial(int n)
{
    if(n == 1 || n == 0)
        return 1;
    return factorial(n-1) * n;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", factorial(a));
    return 0;
}
