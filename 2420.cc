#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    long long n,m;
    cin >> n >> m;
    cout << ((n - m >= 0) ? (n-m) : (m-n)) << endl;
    return 0;
}
