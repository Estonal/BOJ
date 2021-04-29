#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l,p,v;
    int i = 1;
    do {
            cin >> l >> p >> v;
            if(l == 0) break;

            printf("Case %d: %d\n", i++, v/p*l + ((v%p > l) ? l: v%p));

    } while(l != 0 && p != 0 && v != 0);

    return 0;
}
