#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){

    if(b == 0){
        return a;
    }else{
        return gcd(b, a%b);
    }
}


int main()
{
    int t;
    int a,b;
    int tmp;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        tmp = gcd(a, b);

        printf("%d\n", a/tmp*b/tmp*tmp);
    }
    return 0;
}
