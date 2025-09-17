#include <stdio.h>

/* prototype for degree conversion */
void f_to_c_conversion(float fahrenheit, int upper, int step);

int main(void)
{
    // f and c are assigned as floats here
    // to avoid temperature truncation during
    // the division process
    float fahr;
    int lower, upper, step;

    lower = 0; // lower lim of temp table
    upper = 300; // upper lim
    step = 20; // step size

    fahr = lower;

    // header for the table
    printf("----fahrenheit-to-celsius-converter----\n");

    // function for the conversion of f to c
    f_to_c_conversion(fahr,upper, step);
}

/* function to convert f to c */
void f_to_c_conversion(float fahrenheit, int upper, int step)
{
    // assign local celsius for the func
    float celsius;

    // while the current f is less than or equal
    // to the upper limit
    while (fahrenheit <= upper)
    {
        // calculate c
        celsius = (5.0/9.0) * (fahrenheit - 32.0);
        // output f and c with a tab between
        // the float between '%' and the type is how wide
        // each num is in the terminal, and the decimal is
        // the amnt of precision decimals will be output
        // behind the float number in the terminal
        printf("%3.0f\t%6.1f\n", fahrenheit, celsius);
        // increment the f by the initialized step amount
        fahrenheit = fahrenheit + step;
    }
}