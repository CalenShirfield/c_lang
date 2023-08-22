#include <stdio.h>

/*Copy user input to standard output*/

int main()
{
    int c;
    c = 'a';

    // /*read from std input and assign to c*/
    // printf("Enter a character:\n");
    // c = getchar();

    while (c != EOF)
    {
        // int c;
        /*read from std input and assign to c*/
        printf("Enter a character:\n");
        c = getchar();
        printf("Character entered:\n");
        putchar(c);
        printf("\n");
        // c = getchar();
    }
    return 0;
}