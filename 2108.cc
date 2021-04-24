#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[500001];
    int cnt[8001] = {0}; // -4000~ +4000 표현 위함
    int n;
    int sum = 0;
    int most = 0; // 최빈값용
    int check = 0; // 최빈값용
    int i;

    cin >> n;
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
        cnt[a[i] + 4000]++;
        sum += a[i];
    }

    sort(a, a+n);
    printf("%.0f\n", sum/(double)n);
    printf("%d\n", a[(n/2)]);

    for(i=0; i<=8000; i++)
    {
        if(cnt[i] > cnt[most] && cnt[i] != 0)
        {
            most = i;
            check = 1;
        } else if(cnt[i] == cnt[most] && cnt[i] != 0) {
            check++;
            if(check == 2)
                most = i;
        }
    }
    printf("%d\n", most-4000);
    printf("%d\n", a[n-1] - a[0]);

    return 0;
}
