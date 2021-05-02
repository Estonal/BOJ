#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

bool comp(pair<int,int> a,  pair<int,int> b) {
    if (a.second == b.second)
        return (a.first < b.first);
    return (a.second < b.second);
}

int main() {
    int n, i, j, k;
    vector< pair<int, int> > v;

    scanf("%d ", &n);

    for(i = 0; i < n; i++) {
        scanf("%d %d", &j, &k);
        v.push_back(pair<int, int>(j, k));

    }
    sort(v.begin(), v.end(), comp);

    for(i = 0; i < n; i++) {
        printf("%d %d\n", v[i].first, v[i].second);
    }

    return 0;
}
