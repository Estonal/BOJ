#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

void hanoi(int n, int depart, int dest, int sub)
{
    if(n == 1)
        printf("%d %d\n", depart, dest);
    else
    {
        hanoi(n-1 ,depart, sub, dest);

        printf("%d %d\n", depart, dest);

        hanoi(n-1, sub, dest, depart);
    }
}
int main() {
    int n;
    cin >> n;
    printf("%d\n", (int)pow(2, n) - 1);
    hanoi(n, 1, 3, 2);
}
