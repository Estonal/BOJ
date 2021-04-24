#include <stdio.h>
#include <algorithm>


using namespace std;

int main()
{
    int n, i, j, k;
    int a[202];
    int key[203] = {0,};
    int max = 0;

    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        scanf("%d", &a[i]);
        k = 0;
        if(i != 0) {

        for (j = 0; j < i; j++){

            if (a[i] > a[j]){
                key[i]++;
                if (k < key[j])
                    k = key[j];
            }
        }
        key[i] = k + 1; //self 1

        if (max < key[i])
            max = key[i];
        }

    }

    printf("%d", n - max);

    return 0;
}
