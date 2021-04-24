#include <stdio.h>

int main()
{
    int i, n;
    int j, t;
    int k;
    char str[21];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %s", &t, str);
        for(j=0; str[j]!='\0'; j++)
            for(k=0; k<t; k++)
                printf("%c", str[j]);
        printf("\n");
    }
    return 0;
}
