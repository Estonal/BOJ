#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char str[52];
    int i, j;
    int alphabet[26] = {0};
    int oddnum = 0;
    scanf("%s", str);

    for(i=0; str[i] != '\0'; i++)
        alphabet[str[i] - 'A']++;

    for(i='A'; i <= 'Z'; i++)
        if(alphabet[i - 'A']%2 == 1)
            oddnum++;

    if(oddnum < 2)
    {
        for(i = 0; i <= 'Z' - 'A'; i++)
            for(j=0; j < alphabet[i] / 2; j++)
                printf("%c", i + 'A');

        for(i = 0; i <= 'Z' - 'A'; i++)
            if(alphabet[i] % 2 == 1)
            {
                printf("%c", i + 'A');
                break;
            }

        for(i = 'Z' - 'A'; i >= 0; i--)
            for(j=0; j < alphabet[i] / 2; j++)
                printf("%c", i + 'A');

    } else {
        printf("I'm Sorry Hansoo");
    }

    return 0;
}
