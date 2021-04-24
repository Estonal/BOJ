#include <stdio.h>
int main()
{
    int n, i;
    int moves = 0;
    int m;
    scanf("%d", &n);
    //육각육각!
    //1, 6, 12, 18, 24, 30, 36, ...6의 배수..
    n--;    // 2~7을 1~6 순서 맞추려고
    for(i=0; n>0; i++) {
        n -= 6*i;
        if(n <= 0) break;
        moves++;
    }
    moves++;    // 1번방(시작) 포함
    printf("%d", moves);
    return 0;
}
