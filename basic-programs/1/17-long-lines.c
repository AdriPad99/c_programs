#include <stdio.h>

#define LIMIT 1000 /* limit for array size */

int get_line_and_length_from_user(char user_line[], int limit);


int main(void)
{
    int line_len;
    char curr_line[LIMIT]; /* char arr that contains user input */

    // while the return of the function is greater than 1
    while ((line_len = get_line_and_length_from_user(curr_line, LIMIT)) > 1)
    {
        // if the return is greater than 0 (line of len 80+)
        if (line_len > 80)
        {
            // output the line the user input
            printf("%s", curr_line);
        }
    }

    // exit out of main
    return 0;

}

int get_line_and_length_from_user(char user_line[], int limit)
{
    // assign idx and user inp
    int i, c;

    // for loop checking for limit, curr user input char, and newline
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        // if condition is met set the curr idx in the arr to the curr char
        user_line[i] = c;
    }

    // if the current final character is '\n' a newline
    if (c == '\n')
    {
        // set the current idx in the string to the current c var
        user_line[i] = c;

        // increment the idx by 1
        i++;
    }

    // set the current idx in the arg arr to a 0 escape sequence
    user_line[i] = '\0';

    // return out the current idx (array length)
    return i;
}