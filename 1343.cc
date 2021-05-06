#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char s[502];
    int i;
    int dotp[502] = {0,};
    int n = 0; // for dot index
    int xd[502] = {0,};
    int imp = 0;
    int tmp;

    scanf("%s", s);

    for(i=0; s[i] != '\0'; i++)
        if(s[i] == '.')
            dotp[n++] = i;
    dotp[n] = i;

    if(n == i) { // when .......
        printf("%s", s);
        return 0;
    }

    for(i=0; i<=n; i++)
    {
        if(i == 0)
            xd[i] = dotp[i];
        else
            xd[i] = dotp[i] - dotp[i-1] - 1; // X dist
        if(xd[i]%2 == 1)
            imp = 1;    // impossible
    }


    if(imp == 1)
        printf("-1");
    else
    {
        for(i=0; i<=n; i++)
        {
            while(xd[i] != 0)
            {
                if(xd[i] >= 4)
                {
                    xd[i] -= 4;
                    printf("AAAA");
                } else {
                    xd[i] -= 2;
                    printf("BB");
                }
            }
            if(i != n)
                printf(".");
        }
    }

    return 0;
}
