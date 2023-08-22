#include <stdio.h>

/*Count character input*/


int main()
{

    long nc;
    for (nc = 1; getchar() != EOF; ++nc)
    {
        printf("%ld\n",nc); 
    }

    return 0;
}