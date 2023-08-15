/* Program to print the first 16 values of fahrenheit to celcius */

#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit of table */
#define STEP 20 /* step size */

int temp_a()
{
    int fahr;
    printf("Celcius\t Fahrenheit\n");
    for(fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        printf("%d\t %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
}

int temp_d()
{
    int fahr;
    printf("Celcius\t Fahrenheit\n");
    for(fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    {
        printf("%d\t %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
}

char inchar;

// inchar = *args;
int temp_all(char args)
{   

    switch (args)
    {
    case 'a':
        temp_a();
        break;
     case 'd':
        temp_d();
        break;
    }

    return 0;
}


int main()
{
    /* Prompt user for temp readout choice */
     printf("Enter 'a' for Ascend 'd' for Descend\n");
    /* character input saved to */
    scanf("%c", &inchar);
    temp_all(inchar);    
    printf("\n");

    return 0;
}