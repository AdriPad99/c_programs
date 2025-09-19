#include <stdio.h>

/* define max arr size*/
#define LIMIT 1000

/* prototype for user line / len */
int user_line_len(char line[], int limit);

/* prototype for reversing user line */
void reverse(char line[]);

int main(void)
{
    // assign var for line size
    int line_len;
    
    // initialize arr of users line
    char user_line[LIMIT];
    
    // get user line and line len
    line_len = user_line_len(user_line, LIMIT);
    
    // print out the word in reverse
    reverse(user_line);
}

int user_line_len(char line[], int limit)
{
    // assign idx and user inp
    int i, c;
    
    // for loop to get user line
    for (i =0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        // apply curr char to curr idx in arr
        line[i] = c;
    }
    
    if (c == '\n')
    {
        // set the curr idx to a 0 escape sequence
        line[i] = '\0';
    }
    
    // return out the curr idx
    return i;
}

void reverse(char line[])
{
    // assign var to count idx's and idx
    int i, count;
    
    // initialize count
    count = 0;
    
    // for loop through arr
    for (i = 0; i < LIMIT; i++)
    {
        // if curr char isnt a 0 escape sequence
        if (line[i] != '\0')
        {
            // increment i by 1
            count++;
        }
        // else the escape sequwnce is found
        else
        {
            // break out of the loop
            break;
        }
    }
    
    // for loop through the arg arr starting from i
    for (i = count; i >= 0; i--)
    {
        // output tge curr arr idx
        printf("%c", line[i]);
    }
}