#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    int i;
    int tmp;
    queue<int> q;
    string str;
    cin >> n;

    for (i=0; i<n; i++) {

        cin >> str;

        if (str == "push") {

            cin >> tmp;
            q.push(tmp);

        } else if (str == "pop") {

            if (q.empty())
                printf("-1\n");
            else {
                printf("%d\n", q.front());
                q.pop();
            }

        } else if (str == "size") {

            printf("%d\n", q.size());

        } else if (str == "empty") {

            printf("%d\n", q.empty());

        } else if (str == "front") { // top

            if (q.empty())
                printf("-1\n");
            else
                printf("%d\n", q.front());

        } else {

            if (q.empty())
                printf("-1\n");
            else
                printf("%d\n", q.back());

        }
    }

    return 0;
}
