#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


bool comp(string a, string b)
{
    if(a.length() > b.length())
        return false;
    else if(a.length() == b.length())
    {
        return a < b;
    }

    return true;
}

int main()
{
    int n;
    int i;
    string str[20000];
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        cin >> str[i];
    }

    sort(str, str + n, comp);


    for(i = 0; i < n; i++)
        if(i == 0)
            cout << str[i] << '\n';
        else if(str[i].compare(str[i-1]) != 0)
        {
            cout << str[i] << '\n';
        }



    return 0;
}
