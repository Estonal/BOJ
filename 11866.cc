#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    int i;
    queue<int> q;
    queue<int> res;
    scanf("%d %d", &n, &k);

    for(i=1; i<=n; i++)
        q.push(i);

    i = 1;
    while(!q.empty())
    {
        if(i%k == 0)
        {
            res.push(q.front());
            q.pop();
        } else {
            q.push(q.front());
            q.pop();
        }
        i++;
    }

    printf("<");
    for(i=1; i<n; i++)
    {
        printf("%d, ", res.front());
        res.pop();
    }

    printf("%d>", res.front());
    res.pop();
    return 0;
}
