#include <stdio.h>

/* set the max arr size */
#define LIMIT 1000

/* prototype for getting user line */
int get_user_line(char line[], int limit);

int main(void)
{
    /* assign the user line len */
    int line_len;

    /* initialize the user line array */
    char user_line[LIMIT];

    /* while user line is greater than len 1 */
    while ((line_len = get_user_line(user_line, LIMIT)) > 1)
    {
        /* output the curr string */
        printf("%s", user_line);
    }
}

int get_user_line(char line[], int limit)
{
    /* assign idx, user line, space, and column counter */
    int i, j, c, spaces, column;

    /* initialize space and column counter */
    spaces = column = 0;

    /* for loop to get user input */
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        // if the curr char is a space ' '
        if (c == ' ')
        {
            // increment the space var by 1
            ++spaces;
        }
        // set the curr arr val to the curr char
        else
        {
            if (spaces == 0)
            {
                // add the curr char
                line[i] = c;
            }
            // else if spaces is == 4
            else if (spaces == 4)
            {
                // go back to the beginning of the column
                j = i - 3;

                // notify of the existence of a tab
                line[j] = '\\';
                j++;
                line[j] = 't';
                j++;
                
                // reset the spaces counter
                spaces = 0;
            }
            else if (spaces < 3)
            {
                // for loop adding space markers
                for (j = i - spaces; j < i; j++)
                {
                    printf("j is %d (child loop)\n", j);
                    line[j] = '*';
                }

                // reset the spaces counter
                spaces = 0;
            }
        }

        // increment the column by 1
        ++column;

        // if the column is == 4
        if (column == 4)
        {
            // reset the column and space vals
            column = 0;
        }
    }
    

    /* if the curr char is a newline */
    if (c == '\n')
    {
        // set the curr idx to a newline
        line[i] = '\n';

        // increment the idx by 1
        ++i;
    }

    /* set the last arr idx to '\0' escape sequence */
    line[i] = '\0';

    /* return out the curr line len */
    return i;
}