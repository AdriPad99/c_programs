#include <stdio.h>

int main(void)
{
    // assign character holder and char counter
    int c, i, charc;

    // initiailize char counter
    charc = 0;

    // while loop to get user input
    while ((c = getchar()) != EOF)
    {
        // if the curr char isn't a space/newline/tab
        if (c == ' ' || c == '\t' || c == '\n')
        {
            // add a tab for spacing the word and stars
            printf("\t");

            // for loop through the current length of the word
            for (i = 0; i < charc; i++)
            {
                // print out a star for every iteration
                putchar('*');
            }

            // add a newline
            printf("\n");

            // reset the character count back to 0
            charc = 0;
        }
        // else it is one of the above
        else
        {
            // output the curr char
            putchar(c);
            
            // increment the cur char count by 1
            charc++;
        }
    }
}