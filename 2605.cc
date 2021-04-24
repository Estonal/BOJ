#include <stdio.h>
#include <bits/stdc++.h>

void swap(int *i, int *j)
{
  int temp = *i;
  *i = *j;
  *j = temp;
}

int main()
{
    int i, j;
    int n;
    int a[100];
    int b[100] = {};
    for(i=0; i<100; i++)
        b[i] = i + 1;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
        for(j = i; j > i - a[i]; j--)
            swap(&b[j], &b[j-1]);
    }
    for(i=0; i<n; i++)
    printf("%d ", b[i]);



    return 0;
}
