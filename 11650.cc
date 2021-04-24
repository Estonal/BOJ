#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

struct Point {
    int x;
    int y;
};

bool cmp(Point a, Point b)
{
    if(a.x < b.x)
        return true;
    else if(a.x == b.x)
        return (a.y < b.y);
    else
        return false;
}

int main()
{
    int n, i;
    Point p[100000];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &p[i].x, &p[i].y);
    }

    sort(p, p+n, cmp);

    for(i=0; i<n; i++)
    {
        printf("%d %d\n", p[i].x, p[i].y);
    }


    return 0;
}
