#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second == b.second) ? a.first < b.first : a.second < b.second;
}

int main()
{
    int n;
    int i;
    pair<int, int> p[100001];

    int tmp;
    int res = 1;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &p[i].first);
        scanf("%d", &p[i].second);
    }
    sort(p, p+n, cmp);


    tmp = p[0].second;
    res = 1;

    for(i=1; i<n; i++)
    {
        if(p[i].first >= tmp)
        {
            tmp = p[i].second;
            res++;
        }
    }

    printf("%d", res);
    return 0;
}
