#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

struct _a {
    int age;
    char name[102];
};


bool cmp(struct _a p1, struct _a p2) {
    return p1.age < p2.age;
}

int main()
{
    _a person[100000];
    int n;
    int i=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %s", &person[i].age, person[i].name);
    }
    stable_sort(person, person + n, cmp);
    for(i=0; i<n; i++)
        printf("%d %s\n", person[i].age, person[i].name);
    return 0;
}
