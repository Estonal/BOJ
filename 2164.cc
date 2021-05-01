#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    int i;
    int tmp;
    queue<int> q;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        q.push(i);

    while(true)
    {
        tmp = q.front();
        q.pop();
        if(q.empty() == true)
            break;
        tmp = q.front();
        q.pop();
        q.push(tmp);

        if(q.empty() == true)
            break;

    }
    printf("%d", tmp);
    return 0;
}
