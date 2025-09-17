#include <stdio.h>

#define LIMIT 1000 /* limit for the user line array */

/* user line prototype */
int create_user_line(char line[], int limit);

int main(void)
{
    // assign line len
    int line_len;
    
    // initialize array of user line
    char user_inp[LIMIT];

    // while the line len is greater than 1
    while ((line_len = create_user_line(user_inp, LIMIT)) > 1)
    {
        // output the text
        printf("%s\n", user_inp);
    }
}

int create_user_line(char line[], int limit)
{
    // assign idx and char input
    int i, c;

    // for loop while i is less than limit and user input isn't a newline
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        // printf("curr idx: %i\n", i);
        // if the curr char is a space or tab
        if (c == ' ' || c == '\t')
        {
            printf("space\n");
            // decrement the curr idx by 1
            i--;
            // printf("curr idx after space: %i\n", i);
        }
    }
    // printf("line len: %d\n", i);
    // if the last char is a newline
    if (c == '\n')
    {
        // add newline to end of user string
        line[i] = c;

        // increment the idx by 1
        i++;
    }

    // set the curr idx to a 0 escape sequence
    line[i] = '\0';
    // printf("line len: %d\n", i);
    // return out the curr idx
    return i;
}