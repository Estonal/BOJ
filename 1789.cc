#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long i;
    long long s;
    long long sum = 0;
    scanf("%lld", &s);
    for(i=1; 1; i++)
    {
        sum += i;
        if(sum > s)
            break;
    }

    printf("%lld", i-1);
    return 0;
}
