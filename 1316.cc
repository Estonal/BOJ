#include <stdio.h>


int main()
{
    int n,i,j; // n = case

    int g = 0; // group number
    int isgrouped = 1;

    scanf("%d", &n);

    char str[n][101];
    int tmp[n]['z' - 'a' + 1] = {0}; // 특정 문자가 마지막으로 들어온 위치를 기억하는 배열
    int a;     //alphabet address

    for(i=0; i<n; i++)
    {
        scanf("%s", str[i]);
        for(j=0; str[i][j] != '\0'; j++)
        {
            a = str[i][j] - 'a';
            if(tmp[i][a] == 0) { // 아직까지 한번도 등장한 적 없는 문자의 경우
                    if(str[i][0] != str[i][j]) // 원래부터 0주소에 있었을 경우를 제외한 경우(tmp의 배열 원소값에 0이 있다면 한번도 등장하지 않은 문자이거나, 어떤 문자가 들어온 위치가 0이거나 둘 중 하나임
                    {
                        tmp[i][a] = j;      //첫 주소값을 기록, 다시 반복조건문으로 돌아감
                        continue;
                    }
            }

            if(j - tmp[i][a] <= 1) // 연속된 문자인경우
            {
                tmp[i][a] = j;                  // 등장한 j의 위치를 다시 덮어쓰기
            } else {                            // 그룹 단어가 아닌 경우
                isgrouped = 0;
                break;                          //더이상 안쪽 반복문을 돌릴 필요가 없음
            }
        }


        g += isgrouped;
        isgrouped = 1;
    }

    printf("%d", g);
    return 0;
}
