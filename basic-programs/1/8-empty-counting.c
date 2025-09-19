#include <stdio.h>

int main(void)
{
    // assign character int
    int c;

    // initialize vars for blanks, tabs, and newlines
    int blank, nl = 0;
    int tab = 0;

    // while loop checking for EOF
    while ((c = getchar()) != EOF)
    {   
        // if the curr char is ' '
        if (c == ' ')
        {
            // increment blank by 1
            ++blank;
        }

        // if the curr char is '\t'
        if (c == '\t')
        {
            // increment tab by 1
            ++tab;
        }

        // if the curr char is 'nl'
        if (c == '\n')
        {
            // increment the tab by 1
            ++nl;
        }
    }

    // output the gathered contents
    printf("blanks: %d\ntabs: %d\nnewlines: %d\n",blank, tab, nl);
}