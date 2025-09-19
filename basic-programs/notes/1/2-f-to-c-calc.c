#include <stdio.h>

int main(void)
{
    // f and c are assigned as floats here
    // to avoid temperature truncation during
    // the division process
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; // lower lim of temp table
    upper = 300; // upper lim
    step = 20; // step size

    fahr = lower;

    printf("----fahrenheit-to-celsius-converter----\n");

    // while the current f is less than or equal
    // to the upper limit
    while (fahr <= upper)
    {
        // calculate c
        celsius = (5.0/9.0) * (fahr - 32.0);
        // output f and c with a tab between
        // the float between '%' and the type is how wide
        // each num is in the terminal, and the decimal is
        // the amnt of precision decimals will be output
        // behind the float number in the terminal
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        // increment the f by the initialized step amount
        fahr = fahr + step;
    }

}