#include <stdio.h>

int main(void)
{
    // assign vars
    float celsius, fahr;
    int upper, lower, step;

    // initialize the celsius to calculate
    celsius = 0;
    
    // set the upper limit for the c to get to
    upper = 38;
    lower = 0;

    // set the step to increment the c by
    step = 3;

    // initialize the f to the lower end
    fahr = lower;

    printf("cel-------fahr\n");

    // while c is less than or equal to the current upper limit
    while (celsius <= upper)
    {
        // calculate the current f with current c
        fahr = (celsius * (9.0 / 5.0)) + 32;
        // output the current converstion
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        // increment the curr c by the curr step amnt
        celsius += step;
    }

}