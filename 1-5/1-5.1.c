#include <stdio.h>

/*Copy user input to standard output*/

int main()
{
    int c;
    printf("Enter a character:\n");
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        
    }
    return 0;
}