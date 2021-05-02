#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
    int n,k, a, tmp, tmp2;
    cin >> n >> k;

    if(n <= k)
        cout << 0 << endl;
    else {
        for(a = 0; 1; a++)
        {
            tmp = n + a;
            tmp2 = 0;

            while(tmp)
            {
                if(tmp % 2 == 1)
                {
                    tmp2++;
                }
                tmp /= 2;
            }

            if(tmp2 <= k)
                break;
        }
        cout << a << endl;
    }
    return 0;
}
