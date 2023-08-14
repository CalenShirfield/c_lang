#include <stdio.h>

/*Print Fahrenheit - Celcius table
for fahr - 0, 20, ..., 300*/

int main()
{
    /* variables float nature now explicitly declared */
    float fahr, celcius;
    float lower, upper, step;

    lower = 0; /* lower limit of temp scale*/
    upper = 300; /* upper limit*/
    step = 20; /* step size */

    fahr = lower; 
    printf("Fahrenheit\t Celcius\n");
    while(fahr <= upper)
    {
        /* the formula now shows explicit calculation*/
        celcius = 5.0 / 9.0 * (fahr - 32.0);
        /* string format specifier declares 3 chars width
        zero decimal place and 6 chars width with one decimal place*/
        printf("%3.0f\t\t%6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }

    return 0;

}