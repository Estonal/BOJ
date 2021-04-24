#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define M_PI 3.14159265358979323846

int main()
{
    int r;
    scanf("%d", &r);
    printf("%lf\n%lf", (double)r*r*M_PI, (double)r*r*2);
    return 0;
}
