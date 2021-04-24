#include <stdio.h>
int main()
{
    int a[5];
    int sum = 0;
    int i;
    scanf("%d", &a[0]);
    scanf("%d", &a[1]);
    scanf("%d", &a[2]);
    scanf("%d", &a[3]);
    scanf("%d", &a[4]);
    for(i=0; i<5; i++)
        if(a[i] > 40)
            sum += a[i];
        else
            sum += 40;
    printf("%d", sum/5);
            
    
    return 0;
}