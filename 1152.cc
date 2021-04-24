#include <stdio.h>
int main()
{
    char str[1000001];
    int dan = 1;
    int i;
    scanf("%[^\n]", str);

    for(i=0; str[i] != '\0'; i++)
        {
            if(str[i] == ' ') {
                if(i != 0 && str[i+1] != '\0')
                 dan++;
            }
        }

        if(i==1 && str[0] == ' ')
            dan--;

        printf("%d", dan);
    return 0;
}
