#include <iostream>
#include <stdio.h>

using namespace std;

int gcd(int a, int b){

    if(b == 0){
        return a;
    }else{
        return gcd(b, a%b);
    }
}

int solve(int a, int b, int c)
{
    int tmp;
    int tmp2;
    tmp = gcd(a, b);
    tmp = a/tmp * b/tmp * tmp;
    tmp2 = gcd(tmp, c);
    tmp = tmp/tmp2 * c/tmp2 * tmp2;
    return tmp;
}

int main()
{
    int a[5];
    int i, j, k;
    int res = 10000000;
    int tmp;

    for(i=0; i<5; i++)
        scanf("%d", &a[i]);

    for(i=0; i<3; i++)
        for(j=i+1; j<4; j++)
            for(k=j+1; k<5; k++)
            {
                tmp = solve(a[i], a[j], a[k]);
                if(res > tmp)
                    res = tmp;
            }

    printf("%d", res);
    return 0;
}
