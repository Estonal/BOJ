#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    char str[n][81];
    int res[n] = {0};
    int jumsu = 1;
    for(i=0; i<n; i++)
        scanf("%s", str[i]);

    for(i=0; i<n; i++) {
        for(j=0; str[i][j] != '\0'; j++)
        {
            if(str[i][j] == 'O')
            {
                res[i] += jumsu++;
            } else {
                jumsu = 1;
            }
        }
        printf("%d\n", res[i]);
        jumsu = 1;
    }


    return 0;
}
