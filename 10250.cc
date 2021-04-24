#include <stdio.h>
int main()
{
    int t;
    int h,w,n;
    scanf("%d", &t);
    while(t--) {
    scanf("%d %d %d", &h, &w, &n); //층 수, 방 수, 몇번째 손님
        printf("%d%02d\n", ((double)n/h == (double)(n/h)) ? h : (n%h), ((n-1)/h)+1); // n/h가 정수일때, 즉 가장 높은 H층일때 H층 명시
    }
    return 0;
}
