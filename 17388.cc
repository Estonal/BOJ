#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int s,k,h;
    cin >> s >> k >> h;
    if(s + k + h >= 100)
        cout << "OK" << endl;
    else {
        if(s < k && s < h)
            cout << "Soongsil" << endl;
        if(k < s && k < h)
            cout << "Korea" << endl;
        if(h < s && h < k)
            cout << "Hanyang" << endl;

    }
    return 0;
}
