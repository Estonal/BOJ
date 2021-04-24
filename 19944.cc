#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,m;

    cin >> n >> m;

    if(m - 2 <= 0)
        cout << "NEWBIE!" << endl;
    else
        if(m <= n)
            cout << "OLDBIE!" << endl;
        else
            cout << "TLE!" << endl;
    return 0;
}
