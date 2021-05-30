#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    int p[51][51] = {0,}; // [party][person] person : 1, person who knows the truth or must not tell them lie : 2
    int t[51] = {0,}; // know the true : more than 0
    int d_party[51] = {0,};
    int tmp;
    int tmp2;
    int tmp3;
    int person;
    int num = 0;
    int i,j, k;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &tmp); // num of person who knows the truth
    for(i=0; i<tmp; i++)
    {
        scanf("%d", &person);
        t[person]++;
    }

    for(i=1; i<=m; i++)
    {
        scanf("%d", &tmp2); // party members
        for(j=0; j<tmp2; j++)
        {
            scanf("%d", &tmp3); // person index
            p[i][tmp3]++; // 1 : party member
        }
    }


    for(k=1; k<=m; k++) {

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=50; j++)
        {
            if(p[i][j] >= 1)
            {
                p[i][j] += t[j];
                if(t[j] != 0)
                    d_party[i]++; // party that truthman exists
            }
        }
    }


    for(i=1; i<=m; i++)
    {
        if(d_party[i] != 0)
        {
            for(j=1; j<=50; j++)
            {
                if(p[i][j] >= 1)
                    t[j]++;
            }
        }
    }
    }

    int check = 0;

    for(i=1; i<=m; i++)
    {
        check = 0;

        for(j=1; j<=50; j++)
        {
            if(p[i][j] > 1) {
                check = 1;
                break;
            }
        }

        if(check == 0)
            num++;
    }

    printf("%d", num);
    return 0;
}
