#include <iostream>
#include <stdio.h>

using namespace std;

int a[51][51];

int correctw[8][8] = {
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    };

int correctb[8][8] = {
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    };


int comp(int posx, int posy)
{
    int i,j;
    int num1 = 0;
    int num2 = 0;

    for(i=posy; i<posy + 8; i++)
    {
        for(j=posx; j<posx + 8; j++)
        {
            if(a[i][j] != correctw[i - posy][j - posx])
            {
                num1++;
            }
        }
    }


    for(i=posy; i<posy + 8; i++)
    {
        for(j=posx; j<posx + 8; j++)
        {
            if(a[i][j] != correctb[i - posy][j - posx])
            {
                num2++;
            }
        }
    }

    return (num1 < num2) ? num1 : num2;

}


int main()
{
    int n, m; // 각각 y, x
    int i, j, k = 0;
    int mini;
    int res[5000];

    scanf("%d %d", &n, &m);
    getchar();

    for(i=0; i<n; i++)
    {

        for(j=0; j<m; j++)
            scanf("%c", &a[i][j]);
        getchar();
    }

    for(i=0; i<=n-8; i++)
    {
        for(j=0; j<=m-8; j++)
        {
            res[k++] = comp(j, i);
        }
    }

    mini = res[0];

    for(i=1; i<k; i++)
    {
        if(mini > res[i])
            mini = res[i];
    }

    printf("%d", mini);
    return 0;
}
