#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    do {
        cin >> a >> b;
        if(a == 0 && b == 0)
            break;
        if(b % a == 0)
            cout << "factor" << endl;
        else if(a % b == 0)
            cout << "multiple" << endl;
        else
            cout << "neither" << endl;

    }while(true);

    return 0;
}
