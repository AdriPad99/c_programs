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
        printf("%s", user_inp);
    }
}

int create_user_line(char line[], int limit)
{
    // assign idx, char input, and empty line counting
    int i, c, empt_ln;
    
    // initialize the empty line var
    empt_ln = 0;

    // for loop while i is less than limit and user input isn't a newline
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '%'; i++)
    {
        // if the curr char is a space or tab
        if (c == ' ' || c == '\t')
        {
            // decrement the curr idx by 1
            i--;
        }
        // else if the curr char is newline and its counter is 0
        else if (c == '\n' && empt_ln == 0)
        {
            // increment the empty line count
            empt_ln++; 
        }
        // else if the curr char is empty and the counter is at 1
        else if (c == '\n' && empt_ln == 1)
        {
            // reset the counter back to 0
            empt_ln = 0;
            
            // decrement the idx by 2
            i -= 2;
        }
        // else it isnt empty space
        else
        {
            // set the value at the curr idx to the curr char
            line[i] = c;
        }
    }
    
    // if the last char is a newline
    if (c == '%')
    {
        // add newline to end of user string
        line[i] = '\n';

        // increment the idx by 1
        i++;
    }

    // set the curr idx to a 0 escape sequence
    line[i] = '\0';
    
    // return out the curr idx
    return i;
}