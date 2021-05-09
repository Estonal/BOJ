#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d", &n);
    
    for(i=n; i>0; i--)
    {
        for(j=0; j<n-i; j++)
            printf(" ");
        for(j=1; j<=i; j++)
            printf("*");
        printf("\n");
    }
}