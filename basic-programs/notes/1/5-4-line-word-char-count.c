#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input*/

int main(void)
{
    // assign new(word, line, char) and state
    int c, nl, nw, nc, state;

    // initialize the state (outside a word)
    state = OUT;
    
    // initiailze all counts to 0
    nl = nw = nc = 0;

    // while loop to get user input
    while ((c = getchar()) != EOF)
    {
        // increment new character since every
        // possible entry is a character
        ++nc;

        // if the curr char is a '\n' newline
        if (c == '\n')
        {
            // increment the newline var
            ++nl;
        }

        // if the curr char is a space/newline/tab
        if (c == ' ' || c == '\n' || c == '\t')
        {
            // Set state to OUT (outside of a word)
            state = OUT;
        }
        // else if the current state is outside of a word
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }

    // output the values to the lines, words and characters
    printf("%d %d %d\n", nl, nw, nc);
}