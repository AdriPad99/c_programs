#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

/* getline prototype */
int get_line (char s[], int lim);
/* copy prototype */
void copy (char to[], char from[]);

/* print longest input line */

int main(void)
{
    int len;    /* current line length */
    int max;    /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;    /* inittialize max to 0 */

    /* performs while loop while the user keeps creating
    arrays with a size greater than 0*/
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        /* if the current user arr len is greater than 
        the current max length*/
        if (len > max)
        {
            /* reassign the current max length */
            max = len;
            
            /* takes the longest current line (parameter 2)
            and copies it to a new array (parameter 1)*/
            copy(longest, line);
        }

    }

    if (max > 0)    /* theere was a line */
    {
        /* print out the value of the array
        that had the longest input contents*/
        printf("%s", longest);
    }

    /* exit out of main */
    return 0;
}

/* getline: read a line into s, return length */
int get_line (char s[], int lim)
{
    // assign c and i variable
    int c, i;

    // if I is less than the argument limit AND
    // the current character isn't the user exiting the file AND
    // the current character isn't a newline escape sequence
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        // add the current input character to the current for loop iteration
        // idx in the argument array.
        s[i] = c;
    }

    // if the last character of the getchar() is a newline
    // (which it should almost always be)
    if (c == '\n')
    {
        // set the last idx of the argument array to a 
        // newline escape sequence
        s[i] = c;

        // increment the curr idx by 1
        ++i;
    }

    // set the now new ending of the argument array to a '\0' escape sequence
    s[i] = '\0';

    // return out the idx (which is the length of the argument
    // array in this case)
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy (char to[], char from[])
{
    // assign the idx
    int i;

    // initialize the idx
    i = 0;

    /* copy the curr idx from the longest line arr
    into the empy argument array, AND if the current
    idx value isn't a 0 escape sequence*/
    while ((to[i] = from[i]) != '\0')
    {
        // increment the idx by 1
        ++i;
    }
}