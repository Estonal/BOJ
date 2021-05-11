#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int t;
    int tmp;
    int temp = 0;
    int a[100001] = {0,};
    int n = 0;
    cin >> t;
    t *= 2;
    while(t--) {
        cin >> tmp;
        a[tmp]++;
        if(a[tmp] == 1) {
            n++;
        } else if(a[tmp] >= 2)
            n--;

        if(n > temp)
            temp = n;

    }

    printf("%d\n", temp);

    return 0;
}
