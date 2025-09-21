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
            
            // add tge space to the user line
            line[i] = ' ';
        }
        // set the curr arr val to the curr char
        else
        {
            // if there are no spaces
            if (spaces == 0 && c != ' ')
            {
                printf("zero space\n");
                // add the curr char to user line
                line[i] = c;
            }
            
            // if there is 4 or more spaces
            if (spaces >= 4 && c != ' ')
                // for loop 4 times adding a backspace escape sequence
                for (j = i; j <= i +3 ; j++)
                {
                    line[j] = '\b';
                }
                   
                 // increment idx by 3
                 i += 4;
                 
                 // add a backspace ES
                 line[i] = '\\';
                 
                 // increment i
                 i++;
                 
                 // add t
                 line[i] = 't';
                 
                 // decrement spaces by 4
                 spaces -= 4;
            }
            
             // if there is less than 4 spaces
             if (spaces < 4 && c!= ' ')
             {
                  printf("less than 4 space\n");
                  // for loop 4 times adding a backspace escape sequence
                for (j = i; j < i + spaces ; j++)
                {
                    line[j] = '\b';
                }
                   
                 // increment idx by 3
                 i += spaces;
                 
                 // for loop to add space indicators
                 for (j = i; j < i + spaces; j++)
                 {
                     line[j] = '*';
                 }
              
                 // increment i
                 i++;
                 
                 // add curr char
                 line[i] = c;
                 
                 // decrement spaces by itself
                 spaces = 0;
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