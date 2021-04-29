#include <iostream>
#include <stdio.h>

using namespace std;

char output[6500][6500] = {' ',};

void draw_triangle(int n, int y, int x)
{


    if(n == 3)
    {
        output[y][x] = '*';

        output[y+1][x-1] = '*';
        output[y+1][x+1] = '*';

        output[y+2][x-2] = '*';
        output[y+2][x-1] = '*';
        output[y+2][x] = '*';
        output[y+2][x+1] = '*';
        output[y+2][x+2] = '*';
    } else {
        draw_triangle(n/2, y, x);
        draw_triangle(n/2, y + n/2, x - n/2);
        draw_triangle(n/2, y + n/2, x + n/2);
    }


}

int main()
{
    int n;
    int i,j;

    scanf("%d", &n);
    draw_triangle(n, 0, n-1);

    for(i=0; i<n; i++) // y
    {
        for(j=0; j<2*n; j++)
        {
            if(output[i][j] == '*')
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
