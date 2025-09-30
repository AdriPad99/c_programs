#include <stdio.h>

#define LIMIT 1000

int get_user_input(char user_line[], int limit);

int add_seperator_check(char letter, char line[], int curr_idx[], int col);

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
    idx[0] = column = 0;

    /* for loop getting user input */
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        /* increment the col at the start */
        column++;

        /* if the col length is 70 or greater */
        if (column > 69)
        {
            column = add_seperator_check(c, user_line, idx, column);
        }
        // else its not in the threshold
        else
        {
            // add curr char to the arr
            user_line[idx[0]] = c;

            // increment the idx by 1
            idx[0]++;
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
    return idx[0];
}

int add_seperator_check(char letter, char line[], int curr_idx[], int col)
{

    // if the current letter is an indication of the wnd of a word
    if (letter == ' ')
    {
        /* add a letter to the curr idx in the array */
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
    /* else if the curr column length is 70 and above
    AND the curr char is an word ending indicator */
    else if (col > 69 && letter == ',' || letter == '?' || letter == '!')
    {
        // add the curr char to the curr idx in the arr
        line[curr_idx[0]] = letter;

        // increment the curr idx by 1
        curr_idx[0]++;

        // add a newline to the curr idx in the arr
        line[curr_idx[0]] = '\n';

        // increment the curr idx by 1
        curr_idx[0]++;

        // return out 0 to reset the column
        return 0;
    }
    // else it isnt the indication
    else
    {
        /* add a letter to the curr idx in the array */
        line[curr_idx[0]] = letter;

        /* increment the idx by 1 */
        curr_idx[0]++;

        // return out the curr col
        return col;
    }
}