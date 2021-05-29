#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    int i,j;
    string a, b;
    cin >> a >> b;
    ll sum = 0;


    for(i=0; i<a.size(); i++)
    {
        for(j=0; j<b.size(); j++)
        {
            sum += (a[i] - '0') * (b[j] - '0');
        }
    }

    printf("%lld", sum);

    return 0;
}
