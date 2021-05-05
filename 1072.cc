#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x,y;
    int z;
    int tmp;
    int max_x = 1000000000;
    int min_x = 1;
    int mid;
    int tmp2;

    cin >> x >> y;

    z = y*100.0/x;
    if(z >= 99)
        cout << -1 << endl;
    else {
    while(min_x <= max_x)
    {
        mid = (min_x + max_x)/2;

        tmp = (y + mid)*100.0/(x + mid);

        if(z < tmp) {
            max_x = mid - 1;
            tmp2 = mid;
        } else
            min_x = mid + 1;
    }
    cout << tmp2 << endl;
    }
    return 0;
}
