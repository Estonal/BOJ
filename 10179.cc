#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int t;
    double n;
    cin >> t;
    while(t--) {
        cin >> n;
        printf("$%.2f\n", n*0.8);
    }
    return 0;
}
