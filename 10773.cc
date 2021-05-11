#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    int sum = 0;
    int t;
    stack<int> s;
    cin >> k;

    while(k--)
    {
        cin >> t;
        if(t == 0)
        {
            if(!s.empty())
                s.pop();
        } else
            s.push(t);
    }

    while(!s.empty())
    {
        sum += s.top();
        s.pop();
    }

    printf("%d", sum);

    return 0;
}
