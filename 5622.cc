#include <stdio.h>
int main()
{
    char str[16];
    int dialNum[15];
    int i;
    int sum=0;
    scanf("%s", str);
    for(i=0; str[i] != '\0'; i++)
    {
        if(str[i] < 'S')
            dialNum[i] = (str[i] - 'A')/3 + 2;

        if(str[i] == 'S')
            dialNum[i] = 7;
        if(str[i] >= 'T' && str[i] <= 'V')
            dialNum[i] = 8;
        if( str[i] >= 'W' && str[i] <= 'Z')
            dialNum[i] = 9;


        sum += dialNum[i] + 1;
    }

    printf("%d", sum);

    return 0;
}
