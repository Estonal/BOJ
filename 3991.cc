#include <stdio.h>
int main()
{
    int h,w,c;
    int i,j;
    int col[10];
    int p = 1; // for colors
    int p2 = 1;
    int res[101];
    scanf("%d %d %d", &h, &w, &c);
    for(i=1; i<=c; i++)
        scanf("%d", &col[i]);
    for(i=1; i<=h; i++) // 구슬 수 무조건 h*w = 꽉참
    {
        for(j=1; j<=w; j++)
            {
                if(col[p] > 0)
                {
                    col[p]--;
                    res[p2++] = p;
                } else {
                    p++;
                    col[p]--;
                    res[p2++] = p;
                }
            }
    }

    for(i=1; i<=h; i++)
    {
        if(i%2 == 1)
            for(j=1; j<=w; j++)
                printf("%d", res[(i-1)*w + j]);
        else
            for(j=w; j>=1; j--)
                printf("%d", res[(i-1)*w + j]);
        printf("\n");
    }

    return 0;
}
