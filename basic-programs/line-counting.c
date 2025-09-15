#include <stdio.h>

/* count lines in input */

int main(void)
{
    // assign var for input and newline count
    int c, nl;

    // initialize newline count
    nl = 0;

    // Grab user input and check if its EOF
    // if its not execute the statement
    while ((c = getchar()) != EOF)
    {
        // if the input character is a newline
        // (pressing 'enter' on the keyboard)
        if (c == '\n')
        {
            // increment the newline counter by 1
            ++nl;
        }
    }

    // output the amnt of newlines entered
    printf("%d\n", nl);
}