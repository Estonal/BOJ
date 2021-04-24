#include <stdio.h>

using namespace std;

void square(int i, int j, int n)
{
    if((i / n)%3 == 1 && (j / n)%3 == 1)
        printf(" ");
    else {
        if(n / 3 == 0)
            printf("*");
        else
            square(i, j, n / 3);
    }
}


int main()
{
    int i, j;
    int n;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            square(i, j, n);
        printf("\n");
    }

    return 0;
}
