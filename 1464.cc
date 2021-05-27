#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    string s;
    cin >> s;

    for(i=0; i<s.length() - 1; i++)
    if(s[i] < s[i+1]) { // 끝 문자 s[i+1]가 s[i] 기준 사전순으로 앞서있으면 휘리릭!
            // 23451 -> 54321 -->> 12345
            reverse(s.begin(), s.begin() + i + 1);
            reverse(s.begin(), s.begin() + i + 2);
    }

    reverse(s.begin(), s.end());

    cout << s << endl;
    return 0;
}
