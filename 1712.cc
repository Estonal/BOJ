#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(b >= c) // 비용 >= 이익일때 이익이 되는 지점은 영원히 오지 않음
        printf("-1");
    else
        printf("%d", a/(c-b)+1); // 결과값 = r이라 하면, r*c > a + b*r ->  r > a/(c-b) -> r = a/(c-b) + 1
    return 0;
}
