#include <stdio.h>

// prototype for the "power" function
int power(int m, int n);

/* test power function */

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        // output idx, and power of the idx by 2 and -3
        printf("%d %d %d\n", i, power(2,i), power(-3, i));
    }

    return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n)
{
    // assign loop idx and return value
    int i, p;

    // initialize power return value
    p = 1;

    // for loop from one to the max second
    // argument exponent
    for (i = 1; i <= n; i++)
    {
        p = p * base;
    }

    // return out the cumulative power value
    return p;
}