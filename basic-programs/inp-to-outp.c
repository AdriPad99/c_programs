#include <stdio.h>

/* copy input to output */

int main(void)
{
    // assign inp to int c
    int c;

    // // while the input is still being gathered
    // // from the current user
    // while ((c = getchar()) != EOF)
    // {
    //     // output the user input
    //     putchar(c);
    // }

    if ((getchar() != EOF) == 0 || (getchar() != EOF) == 1)
    {
        // output the current EOF content
        printf("%d", EOF);
    }
}