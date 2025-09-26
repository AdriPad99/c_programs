#include <stdio.h>

#define LIMIT 1000

int get_user_input(char user_line[], int limit);

int add_seperator_check(char letter, int curr_col, char line[], int curr_idx[]);

int main(void)
{
    /* assign user input length */
    int user_inp_len;

    /* initialize user input arr */
    char user_input[LIMIT];

    /* while loop to gather user input */
    while ((user_inp_len = get_user_input(user_input, LIMIT)) > 1)
    {
        printf("%s", user_input);
    }
}

int get_user_input(char user_line[], int limit)
{
    /* assign loop idx, char input, arr idx, and col */
    int i, c, column;

    /* assign arr idx */
    int idx[1];

    /* initialize the idx val */
    idx[0] = 0;

    /* for loop getting user input */
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        /* increment the col at the start */
        column++;

        /* if curr idx is not a newline */
        // if (c != '\n')
        // {
        //     /* set the curr char to to curr char */
        //     user_line[idx] = c;

        //     /* increment the idx */
        //     idx++;
        // }

        /* if the curr char is the indicator of the
        end of a word */
        if (c == ' ' || c == '?' || c == '!' || c == ',')
        {
            column = (c,column,user_line,idx);
        }
        /* else if the curr char isn't a newline */
        else if (c != '\n')
        {
            column = (c,column,user_line,idx);
        }

    }

    // if the curr char is a newline
    if (c == '\n')
    {
        /* add newline to curr idx arr */
        user_line[idx[0]] = c;

        /* increment idx by 1 */
        idx[0]++;
    }

    /* add 0 escape sequence to the end of the arr */
    user_line[idx[0]] = '\0';

    /* return out the curr idx */
    return idx;
}

int add_seperator_check(char letter, int curr_col, char line[], int curr_idx[])
{
    /* if the col length is 80 */
    if (curr_col < 80 && curr_col > 69)
    {
        /* add a newline to the curr idx in the array */
        line[curr_idx[0]] = letter;

        /* increment the idx by 1 */
        curr_idx[0]++;

        /* add a newline to the curr arr idx */
        line[curr_idx[0]] = '\n';

        /* increment thee idx by 1 again */
        curr_idx[0]++;

        /* return out 0 to reset column length*/
        return 0;
    }
}