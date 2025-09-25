#include <stdio.h>

/* set the max arr size */
#define LIMIT 1000

/* prototype for getting user line */
int get_user_line(char line[], int limit);

/* prototyppe for adding tab to user line */
void add_tab(char user_line[], int idx);

/* prototype for adding space */
void add_space(char user_line[], int idx);

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
    /* assign idx, user line, space, and idx tracker */
    int i, j, c, end, spaces, idx;

    /* initialize space and column counter */
    spaces = idx = j = 0;

    /* for loop to get user input */
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {

        /* if the curr char is a space ' ' */
        if (c == ' ')
        {
            // increment the amnt of spaces
            spaces++;
        }
        /* else its not a space */
        else
        {
            /* inittialize tabs and amnt of spaces */
            int tabs = spaces < 8 ? 0 : spaces / 8;
            int amnt_spaces = spaces < 8 ? spaces : spaces % 8;
            // printf("amnt of tabs: %i, amnt of spaces: %d\n", tabs, amnt_spaces);

            if (spaces > 0)
            {
                if (tabs > 0)
                {
                    /* initialize end of loop */
                    end = j + tabs;

                    /* for loop adding tabs for each tab */
                    for (j = 0; j < end; j++)
                    {
                        /* add tab to arr */
                        add_tab(line, idx);

                        /* increment arr idx */
                        idx++;
                    }
                }

                if (amnt_spaces > 0)
                {
                    /* initialize end of loop */
                    end = j + amnt_spaces;

                    /* for loop adding tabs for each tab */
                    for (j = 0; j < end; j++)
                    {
                        /* add tab to arr */
                        add_space(line, idx);

                        /* increment arr idx */
                        idx++;
                    }
                }

                // reset the amnt of spaces back to 0
                spaces = j = 0;
            }

            /* add the curr char to the arr */
            line[idx] = c;

            /* increment the idx */
            idx++;
        }
    }

    /* if the curr char is a newline */
    if (c == '\n')
    {
        // set the curr idx to a newline
        line[idx] = '\n';

        // increment the idx by 1
        ++idx;
    }

    /* set the last arr idx to '\0' escape sequence */
    line[idx] = '\0';

    /* return out the curr line len */
    return idx;
}

void add_tab(char user_line[], int idx)
{
    user_line[idx] = '\t';
}

void add_space(char user_line[], int idx)
{
    user_line[idx] = ' ';
}
