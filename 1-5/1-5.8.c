#include <stdio.h>

#define IN 1 /*inside a word*/
#define OUT 0 /*outside a word*/

/*count lines, words and characters of input*/


int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;

        if(c == '\n')
            ++nl;
    
        if(c == '\0' || c == '\n' || c == '\t')
            state = OUT;

        else if(state == OUT)
        {
            state = IN;
            ++nw;  
        }          
        printf("%d\n", nl);
    }

    return 0;

}