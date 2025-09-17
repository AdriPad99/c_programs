#include <stdio.h>

int main(void)
{
    // assign current word
    int c;

    // while loop to get user inp
    while ((c = getchar()) != EOF)
    {
        // if the current char is a space/newline/tab
        if (c == '\n' || c == ' ' || c == '\t')
        {
            // output a newline
            printf("\n");
        }
        // else its not a word ending signifier
        else
        {
            // output the current character
            putchar(c);
        }
    }
}