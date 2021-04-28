#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>


using namespace std;
int a[100000] = {0,};


int findnum(int posl, int posh, int num)
{
    if(posh < posl)
        return 0;

    int mid = (posl + posh)/ 2;

    if(a[mid] < num)
        return findnum(mid+1, posh, num);
    else if(a[mid] > num)
        return findnum(posl, mid-1, num);
    else
        return 1;

}

int main()
{

    int n, m, i, j, tmp;
    int exist = 0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    sort(a, a + n);

    scanf("%d", &m);
    for(i=0; i<m; i++)
    {
        scanf("%d", &tmp);
        printf("%d\n", findnum(0, n, tmp));
    }
    return 0;
}
