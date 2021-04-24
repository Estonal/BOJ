#include <stdio.h>

void biyul(int n, double m, int* arr)
{
    int p = 0;
    int i;
    for(i=0; i<n; i++)
        if(arr[i] > m)
            p++;
    printf("%.3f%%\n", (double)p/n*100);
}

int main()
{
    int i,j,c;
    int sum;
    scanf("%d", &c);
    int stu[c];
    int score[c][1000];
    for(i=0; i<c; i++) {
        sum = 0;
        scanf("%d", &stu[i]);
        for(j=0; j<stu[i]; j++)
        {
            scanf("%d", &score[i][j]);
            sum += score[i][j];
        }
        biyul(stu[i], (double)sum/stu[i], score[i]);
    }



    return 0;
}
