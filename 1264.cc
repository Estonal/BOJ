#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    string s;
    string::iterator it;
    int i;
    int num = 0;
    char moeum[10] = {
        'a',
        'e',
        'i',
        'o',
        'u',
        'A',
        'E',
        'I',
        'O',
        'U'
    };
    getline(cin, s);

    while(s.compare("#") != 0) {
        num = 0;
        for(it = s.begin(); it != s.end(); ++it)
        {
            for(i=0; i<10; i++)
                if(*it == moeum[i])
                    num++;
        }
        printf("%d\n", num);
        getline(cin, s);
    }
    return 0;
}
