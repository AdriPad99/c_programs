#include <stdio.h>

int main(void)
{
    // // get the input
    int c;

    // initialize a space counter to 1
    int space = 1;

    // while loop to get the input
    while ((c = getchar()) != EOF)
    {
        // if current letter isn't a space
        if (c != ' ')
        {
            // output the current character
            putchar(c);
        }

        // if the current letter IS a space and the space counter
        // is at a value of 1
        if (c == ' ' && space == 1)
        {
            // output the space
            putchar(' ');
            // decrement the space counter by 1
            space--;
        }
    }

}