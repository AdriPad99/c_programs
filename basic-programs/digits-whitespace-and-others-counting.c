#include <stdio.h>

/* count digits, white space, others */

int main(void)
{
    // assign the input whitespace and other
    int c, i, nwhite, nother;

    // declare int array 'ndigit' of size 10
    int ndigit[10];

    // initialize whitespace and other to 0
    nwhite = nother = 0;

    // for loop through the length of the digit array length
    for (i = 0; i < 10; i++)
    {
        // initialize the curr idx in the digit array to 0
        ndigit[i] = 0;
    }
        
    // get user input if not EOF
    while ((c = getchar()) != EOF)
    {
        // if the current char is >= '0' and if
        // the curr char is <= '9'
        if (c >= '0' && c <= '9')
        {
            ++ndigit[c - '0'];
        }
        // else if the current char is a word
        // ending signifier
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            // increment the whitespace counteer by 1
            ++nwhite;
        }
        // else if the char is anything else
        else
        {
            // increment the other counter by 1
            ++nother;
        }
    }

    // inform the user of the current digits
    printf("digits = ");

    // for loop through the length of the int array
    for (i = 0; i < 10; i++)
    {
        // output each digit in the program array
        printf(" %d", ndigit[i]);
    }

    // output the amnt of white space and other characters
    printf(", white space = %d, other = %d\n", nwhite, nother);
}