#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,e;
    int i;
    cin >> a >> b >> c >> d >> e;
    printf("%d", a - max(b%d == 0 ? b/d : b/d + 1, c%e == 0 ? c/e : c/e + 1));
    return 0;
}
