#include <stdio.h>

int main(void)
{
    // assign variable to hold text
    int c;

    // while loop to get user input
    while ((c = getchar()) != EOF)
    {
        // if current char is a '\t' tab
        if (c == '\t')
        {
            // output that its a tab
            printf("\\t");
        }

        // if the current char is a '\b' backspace
        if (c == '\b')
        {
            // output that it's a backspace
            // NOTE: I researched this and it seems like
            // backspace is possibly diregarded by the terminal
            // so this TECHNICALLY works on a logical level but
            // will never come up since any 'b' call is 
            // disregared by the terminal
            printf("\\b");
        }

        // if the current character is a '\' backslash
        if (c == '\\')
        {
            // output that it's a backslash
            printf("\\");
        }
    }

    putchar(c);
}