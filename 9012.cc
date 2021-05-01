#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, i, j;
    int ps = 0;
    int res = 0;
    string s;

    cin >> n;

    for(j=0; j<n; j++) {
        ps = 0;
        res = 0;
        cin >> s;

        for(i=0; i<s.length(); i++)
        {
            if(s[i] == '(')
                ps++;
            else if(s[i] == ')')
                ps--;
            if(ps < 0)
                break;
        }
        if(ps == 0)
            res = 1;

        printf("%s\n", res ? "YES" : "NO");
    }
    return 0;
}
