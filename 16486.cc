#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    printf("%.06f\n", ((double)a+(b*3.141592))*2);
    return 0;
}
