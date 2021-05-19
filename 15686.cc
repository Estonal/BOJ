#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int dist(int a, int b)
{
    return (b - a) > 0 ? b - a : a - b;
}

int main()
{
    int n, m;
    int i, j;
    int w[51][51];
    vector<pair<int, int>> h; // y, x
    int nh = 0; // num of house
    vector<pair<int, int>> c;
    int nc = 0; // num of chicken
    int sum = 0;
    int temp;
    int sum_tmp = 100000;


    vector<int> v;

    scanf("%d", &n);
    scanf("%d", &m);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &w[i][j]);
            if(w[i][j] == 1) {// 집
                h.push_back(make_pair(i, j));
                nh++;
            } else if(w[i][j] == 2) { // 치킨
                c.push_back(make_pair(i, j));
                nc++;
            }
        }
    }



    for(i=0; i<nc-m; i++)
        v.push_back(0); // for permutation

    for(i=0; i<m; i++)
        v.push_back(1); // for permutation


    do {
        sum = 0;
        for(i=0; i<nh; i++)
        {
            temp = 10000;
            for(j=0; j<nc; j++)
            {
                if(v[j] == 1)
                    temp = min(temp, dist(h[i].first, c[j].first) + dist(h[i].second, c[j].second));
            }
            sum += temp;
        }

        sum_tmp = min(sum_tmp, sum);

    } while( next_permutation(v.begin(), v.end()));

    printf("%d", sum_tmp);

    return 0;
}
