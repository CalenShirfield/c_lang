#include <stdio.h>

/*Count character input*/


int main()
{

    double nc;
    /* null statement requirement to satisfy for loop body*/
    for (nc = 1; getchar() != EOF; ++nc)
    ;
        printf("%.0f\n",nc); 
    

    return 0;
}