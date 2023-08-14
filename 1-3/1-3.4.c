#include <stdio.h>

/*Print Fahrenheit - Celcius table
for fahr - 0, 20, ..., 300*/

int celtofahr()
{
    float lower = 0; /* lower limit of temp scale*/
    float upper = 300; /* upper limit*/
    int step = 20; /* step size */

    float fahr, celcius;
    fahr = lower;

     while(fahr <= upper)
    {
        /* the formula now shows explicit calculation*/
        celcius = 5.0 / 9.0 * (fahr - 32.0);
        // fahr = (celcius * 5.0 / 9.0) + 32;
        /* string format specifier declares 3 chars width
        zero decimal place and 6 chars width with one decimal place*/
        printf("%6.1f\t\t%3.0f\n", celcius, fahr);
        fahr = fahr + step;
    }
    return 0;
}

int fahrtocel()
{
    float lower = 0; /* lower limit of temp scale*/
    float upper = 300; /* upper limit*/
    float step = 20; /* step size */

    float fahr, celcius;
    fahr = 0;
    celcius = lower;

     while(celcius <= upper)
    {
        /* the formula now shows explicit calculation*/
        celcius = 5.0 / 9.0 * (fahr - 32.0);
        // fahr = (celcius * 5.0 / 9.0) + 32;
        /* string format specifier declares 3 chars width
        zero decimal place and 6 chars width with one decimal place*/
        printf("%6.1f\t\t%3.0f\n",fahr, celcius);
        celcius = celcius + step;
    }
    return 0;
}


int main()
{
    printf("Celcius\t Fahrenheit\n");
    celtofahr();
    printf("\n");
    printf("Fahrenheit\t Celcius\t");
    fahrtocel();

    return 0;
}