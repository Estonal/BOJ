#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;
    int n, i;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        q.push(i);
    while(!q.empty())
    {
        printf("%d ", q.front());
        q.pop();
        if(q.empty())
            break;
        q.push(q.front());
        q.pop();
    }

    return 0;
}
