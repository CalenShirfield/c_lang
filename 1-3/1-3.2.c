#include <stdio.h>

/*Print Fahrenheit - Celcius table
for fahr - 0, 20, ..., 300*/

int main()
{
    int fahr, celcius;
    int lower, upper, step;

    lower = 0; /* lower limi of temp scale*/
    upper = 300; /* upper limit*/
    step = 20; /* step size */

    fahr = lower; 
    printf("Fahrenheit\t Celcius\n");
    while(fahr <= upper)
    {
        /* Truncation is avoided due to coersion*/
        celcius = 5.0 / 9 * (fahr-32);
        printf("%d\t\t%d\n", fahr, celcius);
        fahr = fahr + step;
    }

    return 0;

}