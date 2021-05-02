#include <iostream>
#include <stdio.h>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    string res;
    int i;
    int n = 0; // upper num

    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for(i=0; i < a.length() && i < b.length(); i++)
    {
        if(a.at(i) - '0' + b.at(i) - '0' + n < 10)
        {
            res.push_back(a.at(i) - '0' + b.at(i) - '0' + n + '0');
            n = 0;
        } else {
            res.push_back((a.at(i) - '0') + (b.at(i) - '0') - 10 + n + '0');
            n = 1;
        }
    }

    if(i >= a.length())
    {
        while(i < b.length())
        {
            if(b.at(i) - '0' + n < 10)
            {
                res.push_back((b.at(i) - '0') + n + '0');
                n = 0;
            } else {
                res.push_back((b.at(i) - '0') - 10 + n + '0');
                n = 1;
            }
            i++;
        }
    } else if(i >= b.length())
    {

        while(i < a.length())
        {
            if(a.at(i) - '0' + n < 10)
            {
                res.push_back( (a.at(i) - '0') + n + '0');
                n = 0;
            } else {
                res.push_back( (a.at(i) - '0') - 10 + n + '0');
                n = 1;
            }
            i++;
        }
    }

    if(n == 1)
        res.push_back('1');

    reverse(res.begin(), res.end());

    cout << res << endl;


    return 0;
}
