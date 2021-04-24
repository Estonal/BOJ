#include <stdio.h>
// 3kg, 5kg
int main()
{
    int n;
    int bongji = 0;
    scanf("%d", &n); //input

    while(n % 5 != 0 && n > 0) {
        /*3kg과 5kg짜리 봉지만 가지고 설탕을 전부 넣을 수 있다면, 3으로 계속 뺐을 때 5의 배수가 나올 수밖에 없음.
        따라서 3kg짜리 봉지에 담고 5의 배수가 될때까지 기다림. 만약 빼다가 n=0이 되었을 경우 3kg 봉지만 가지고 만들수 있다는 의미.
        n < 0일 경우 3,5만 가지고 정확하게 설탕을 넣을 수 없음*/
        n -= 3;
        bongji++;
    }


    printf("%d", (n < 0) ? -1 : bongji + n/5); // n < 0일 경우 3,5만 가지고 설탕을 정확하게 배달할 수 없음.
    return 0;
}
