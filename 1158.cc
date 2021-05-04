#include <iostream>
#include <stdio.h>
#include <list>
#include <vector>

using namespace std;

int main()
{
    int n,k;
    list<int> l;
    list<int>::iterator it;
    int i;
    int cnt = 0;


    cin >> n >> k;

    for(i=1; i<=n; i++)
        l.push_back(i);

    printf("<");

    i = 0;
    for(it = l.begin(); !l.empty(); ) {

        i++;
        if(i%k == 0)
        {
            cnt++;
            if(cnt != n)
                printf("%d, ", l.front());
            else
                printf("%d", l.front());
            l.pop_front();

        } else {
            l.push_back(l.front());
            l.pop_front();
        }


    }

    printf(">");

    return 0;
}
