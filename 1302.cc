#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    int n;
    int i;
    int mnum = 0;
    int num = 0;
    string res;
    string tmp;

    cin >> n;
    vector<string> v(n);

    for(i = 0; i < n; i++)
        cin >> v[i];

    tmp = v[0];
    sort(v.begin(), v.end());

    for(i = 0; i < n; i++)
    {

        if (v[i] == tmp)
            num++;
        else {
            if (mnum < num)
            {
                mnum = num;
                res = tmp;
            }
            tmp = v[i];
            num = 1;
        }

    }

    if (mnum < num)
        res = tmp;

    cout << res << "\n";
    return 0;
}
