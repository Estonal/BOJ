#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

    int n;
    int i;
    int tmp;
    stack<int> s;
    string str;
    cin >> n;

    for (i=0; i<n; i++) {

        cin >> str;

        if (str == "push") {

            cin >> tmp;
            s.push(tmp);

        } else if (str == "pop") {

            if (s.empty())
                printf("-1\n");
            else {
                printf("%d\n", s.top());
                s.pop();
            }

        } else if (str == "size") {

            printf("%d\n", s.size());

        } else if (str == "empty") {

            printf("%d\n", s.empty());

        } else { // top

            if (s.empty())
                printf("-1\n");
            else
                printf("%d\n", s.top());

        }
    }

    return 0;
}
