#include <stdio.h>

/* count chars in input */

int main(void)
{
    // assign long to count chars
    // long nc;

    // nc = 0;

    // while the user is still inputting through the
    // keyboard
    // while (getchar() != EOF)
    // {
    //     // increment the char count by 1
    //     ++nc;
    //     printf("%ld\n", nc);
    // }

    // using a for loop to count user input character
    // count

    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
    {
        // this won't throw a compilation error.
        // All the work here is done in the conditional of
        // the for loop and the incrementation of the for loop.

        // The user will input a character and it will be checked
        // if it was an input of EOF. If it wasn't, the 'nc' variable
        // will be incremented by 1. If it is EOF, the for loop 
        // execution ends and the total amnt of the characters is printed
        // out after the for loop stops executing
        ;
    }

    printf("%.0f\n", nc);
}