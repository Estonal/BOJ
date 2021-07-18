#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

#define CENTER 5000
using namespace std;

int m[51][5] = {0,};

int drawTornado(int dist, int startnum, int r1, int c1, int r2, int c2) // dist : 1로부터 얼마나 떨어져있냐! startnum: 네모 그릴때 시작할 숫자
{
    // dist를 이용하여 draw 시작할 좌표 구하기.
    int num = startnum;
    int y,x; // 0,0 -> 0,1 -> 1,2 -> 2,3
    if(dist == 0)
    {
        y = 0;
        x = 0;
    } else {
        y = dist-1;
        x = dist;
    }

    for(int i=0; i<(dist-1)*2+1; i++) {
        if(y >= r1 && x >= c1 && y <= r2 && x <= c2)
            m[y-r1][x-c1] = num;
        num++;
        y--;
    }
    for(int i=0; i<(dist)*2+1; i++) {
        if(y >= r1 && x >= c1 && y <= r2 && x <= c2)
            m[y-r1][x-c1] = num;
        num++;
        x--;
    }
    x++;

    for(int i=0; i<(dist)*2; i++) {
        y++;
        if(y >= r1 && x >= c1 && y <= r2 && x <= c2)
            m[y-r1][x-c1] = num;
        num++;
    }

    for(int i=0; i<(dist)*2; i++) {
        x++;
        if(y >= r1 && x >= c1 && y <= r2 && x <= c2)
            m[y-r1][x-c1] = num;
        num++;
    }


    return num;

}

int getDigit(int a)
{
    int i=0;
    for(i = 0; a > 0; i++)
        a /= 10;
    return i;
}

int main()
{
    int r1, c1, r2, c2;
    int n=1;
    int maxt=0;
    int tmp=0;
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

    maxt = max(max(abs(r1),abs(r2)), max(abs(c1),abs(c2)));

    for(int i=0; i<=maxt+1; i++)
        n = drawTornado(i, n, r1, c1, r2, c2);


    for(int i=0; i<=r2-r1; i++)
        for(int j=0; j<=c2-c1; j++)
            tmp = max(m[i][j], tmp);

    int digit = getDigit(tmp);

    for(int i=0; i<=r2-r1; i++) {
        for(int j=0; j<=c2-c1; j++)
        {
            for(int k=1; k<=digit - getDigit(m[i][j]); k++)
                printf(" ");
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
