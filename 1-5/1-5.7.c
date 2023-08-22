#include <stdio.h>

/*count lines in input*/

int main()
{
    int c, nl;

    nl = 0;

    while((c = getchar()) == '\n')
    {  
        ++nl;
        printf("%d\n", nl);
    }
}