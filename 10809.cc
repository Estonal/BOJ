#include <stdio.h>
int main()
{
    int n['z' - 'a' + 1];
    int i;
    for(i='a'; i <= 'z'; i++)
        n[i-'a'] = -1;
    char str[101];
    scanf("%s", str);
    for(i=0; str[i] != '\0'; i++) {
        if(n[str[i]-'a'] == -1)
            n[str[i]-'a'] = i;
    }

    for(i='a'; i <= 'z'; i++)
        printf("%d ", n[i-'a']);
    return 0;
}
