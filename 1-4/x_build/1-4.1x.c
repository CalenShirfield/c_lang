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


int temp_all(char args1)
{   

    
    temp_d();

    switch (args1)
    {
    case args1 == a:
        temp_a()
        break;
     case args1 == b:
        temp_d()
        break;
    }




}



int main()
{
    temp_a();
    temp_d();
    printf("\n");

    return 0;
}