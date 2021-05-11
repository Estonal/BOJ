#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, a, b, n, t;
    int sum1 = 0;
    int sum2 = 0;

    cin >> a >> b;

    for(i=1; 1; i++)
    {
        if((i-1)*i/2 < a && a <= i*(i+1)/2)
            break;
    }
    t = i;

    for(i=1; i < t; i++)
        sum1 += i*i;
    sum1 += (a - (i-1)*i/2 - 1)*t;



    for(i=1; 1; i++)
    {
        if((i-1)*i/2 < b && b <= i*(i+1)/2)
            break;
    }
    t = i;

    for(i=1; i < t; i++)
        sum2 += i*i;
    sum2 += (b - (i-1)*i/2)*t;

    printf("%d\n", sum2 - sum1);
    return 0;
}
