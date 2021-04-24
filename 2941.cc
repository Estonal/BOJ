#include <stdio.h>


int main()
{
    int i=0;
    char str[103];
    int alpha = 0; // alphabet numbers
    scanf("%s", str);
    for(i=0; str[i] != '\0'; i++) {


        if(str[i] == 'c') // c= or c-
            if(str[i+1] == '=' || str[i+1] == '-')
                i++; // skip =,-

        if(str[i] == 'd')
        {
            if(str[i+1] == '-') // d-
                i++;    //skip -
            else if(str[i+1] == 'z' && str[i+2] == '=') // dz=
                i += 2; // skip z=
        }

        if(str[i] == 'l' || str[i] == 'n') // lj, nj
            if(str[i+1] == 'j')
                i++; // skip j

        if(str[i] == 's' || str[i] == 'z') // s=, z=
            if(str[i+1] == '=')
                i++; // skip =


        alpha++; // alphabet num + 1
    }

    printf("%d", alpha);

    return 0;
}
