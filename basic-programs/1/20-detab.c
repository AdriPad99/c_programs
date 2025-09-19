#include <stdio.h>

/* limit for the user line arr */
#define LIMIT 1000 

/* prototype for user line */
int get_user_line(char line[], int limit);

int main(void)
{
    // assign user line len var
    int len;

    // initialize user line len
    len = 0;

    // initialize arr for user line
    char user_line[LIMIT];

    // while the user line return is greater than 1
    while ((len = get_user_line(user_line, LIMIT)) > 1)
    {
        printf("%s", user_line);
    }
}

int get_user_line(char line[], int limit)
{
    /* assign the idx (parent and child), curr char,
     and amnt of spaces */
    int i, j, c, space;

    /* initialize the space for tabs */
    space = 3;
    
    // for loop to get user input
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        // if the curr char is a '\t' tab
        if (c == '\t')
        {
            // for loop an equal amnt of spaces equal to a tab
            for (j = i; j <= i + space; j++)
            {
                printf("current remaining space: %d\n", space);
                // set the curr child idx in the arr to a space
                line[j] = '%';
            }

            // increment the parent idx by the remaining space
            i += space;

            // reset the space back down to 0 since tab was hit
            space = 0;
        }
        // else it's not a tab
        else
        {
            // add the curr char to the user line arr
            line[i] = c;
        }

        // if the space is == 0
        if (space == 0)
        {
            // reset it back to 3
            space = 3;
        }
        // else the space isn't 0
        else
        {
            // decrement the space by 1
            --space;
        }
    }

    // if the curr char is '\n'
    if (c == '\n')
    {
        // add it to the end of the arg arr
        line[i] = c;

        // increment thte parent idx by 1
        i++;
    }

    // add a 0 escape sequence to the end of the arg arr
    line[i] = '\0';

    // return out the curr parent idx val
    return i;
}