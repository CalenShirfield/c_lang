#include <stdio.h>

/*Count character input*/


int main()
{

    long nc;
    nc = 0;

    while(getchar() != EOF)
    {
        nc++;
        printf("%ld\n",nc);
    }

    return 0;
}