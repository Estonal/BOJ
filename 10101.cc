#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a + b + c != 180)
        printf("Error\n");
    else if(a == b && b == c && a == 60)
        printf("Equilateral\n");
    else if(a != b && b != c && c != a)
        printf("Scalene\n");
    else
        printf("Isosceles\n");
    return 0;
}
