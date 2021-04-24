#include <stdio.h>

char upperChar(char c) {
    if(c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    else return c;
}

int main()
{
    int i;
    int max[2] = {0};
    char str[1000001];
    int alpha['Z' - 'A' + 1] = {0};
    int maxsame = 0;
    scanf("%s", str);

    for(i=0; str[i]!='\0'; i++) {
        str[i] = upperChar(str[i]);
    }

    for(i=0; str[i]!='\0'; i++)
    {
        alpha[str[i] - 'A']++;
        if(max[1] < alpha[str[i] - 'A']) {
            max[1] = alpha[str[i] - 'A'];
            max[0] = i;
        }
    }

    for(i='A'; i<='Z'; i++)
    {
        if(max[1] == alpha[i-'A'])
            maxsame++;
    }

    if(maxsame >= 2)
        printf("?");
    else {
        printf("%c", str[max[0]]);
    }



    return 0;
}
