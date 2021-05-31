#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    string s;
    scanf("%lld\n", &n);

    while(n--) {
        getline(cin, s);
        sort(s.begin(), s.end());

        do {

            printf("%s\n", s.c_str());

        } while(next_permutation(s.begin(), s.end()));

    }
    return 0;
}
