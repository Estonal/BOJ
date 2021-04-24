#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int a,b,c,x,y;
    int i;
    int van;
    int tmp1;
    int tmp2;
    int money = -1;
    scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);
    van = max(x, y) * 2;
    for(i=0; i<=van; i += 2)
    {
        tmp1 =  a*(x-(i/2));
        tmp2 = b*(y-(i/2));
        if(tmp1 < 0)
            tmp1 = 0;
        if(tmp2 < 0)
            tmp2 = 0;

        if(money == -1)
            money =  tmp1 + tmp2 + c*i;
        else if(money > tmp1 + tmp2 + c*i)
            money = tmp1 + tmp2 + c*i;
    }

    cout << money << endl;
    return 0;
}
