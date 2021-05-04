#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[10];
    char str[12];
    int i, j;
    scanf("%s", str);
    for(i=0; str[i] !='\0'; i++)
        a[i] = str[i] - '0';

    sort(a, a+i, greater<>());
    for(j=0; j<i; j++)
        printf("%d", a[j]);
    return 0;
}
