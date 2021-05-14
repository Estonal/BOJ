#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;



int main() {

    int p[101] = {0,}, t[101] = {0,};
    int f = 0, n, k;
    int s, i, j;
    int tmp = 1011, tmp2 = 0;

    cin >> n >> k;

    for (i = 1; i <= k; i++) {
        cin >> s;
        if(p[s] > 0)
            p[s]++;
        else {

            if(f < n){
                p[s]++;
                t[s]=i;
                f++;

            } else {
                tmp = 1001;
                tmp2 = 0;

                for (j = 1; j <= 100; j++) {

                    if(!p[j]) continue;

                    if(p[j] < tmp) {
                        tmp = p[j];
                        tmp2 = j;
                    } else if(tmp == p[j]) {

                        if(t[j] < t[tmp2])
                            tmp2 = j;
                    }
                }
                p[s]++;
                t[s] = i;
                p[tmp2]=0;
                t[tmp2]=0;
            }
        }
    }

    for (i = 1; i <= 100; i++)
        if(t[i])
            printf("%d ", i);

    return 0;
}
