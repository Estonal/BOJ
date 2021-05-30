#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i;
    cin >> s;
    int num[2] = {0,}; // 0 bundle, 1 bundle
    char tmp;

    tmp = s[0];
    num[tmp - '0']++;

    for(i=1; i<s.size(); i++)
    {
        if(s[i] != tmp)
        {
            tmp = s[i];
            num[tmp - '0']++;
        }
    }

    printf("%d", min(num[0], num[1]));
    return 0;
}
