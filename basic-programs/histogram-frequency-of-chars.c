#include <stdio.h>

#define ALPHA 26

int main(void)
{
    // assign user input, for loop num, and alphabet ascii
    int c, i, j, ascii;

    // initialize the ascii var (starting at lowercase a)
    ascii = 97;

    // initialize arr for character values
    int vals[ALPHA];

    // initialize arr for characters [a-z -> 0-25]
    char chars[ALPHA];

    // // initialize the chars val arr
    for (i = 0; i < ALPHA; i++)
    {
        // initialize each iteration to a 0
        vals[i] = 0;
    }

    // // initialize the chars arr
    for (i = 0; i < ALPHA; i++)
    {
        // initalize current iteration in chars
        // arr to the curr ascii val
        chars[i] = ascii;

        // increment the current ascii val
        ascii++;
    }

    // while loop to get user input
    while ((c = getchar()) != EOF)
    {
        // // increment designated array val 
        // // depending on current char
        if (c == 'a' || c == 'A')
        {
            vals[0]++;
        }
        else if (c == 'b' || c == 'B')
        {
            vals[1]++;
        }
        else if (c == 'c' || c == 'C')
        {
            vals[2]++;
        }
        else if (c == 'd' || c == 'D')
        {
            vals[3]++;
        }
        else if (c == 'e' || c == 'E')
        {
            vals[4]++;
        }
        else if (c == 'f' || c == 'F')
        {
            vals[5]++;
        }
        else if (c == 'g' || c == 'G')
        {
            vals[6]++;
        }
        else if (c == 'h' || c == 'H')
        {
            vals[7]++;
        }
        else if (c == 'i' || c == 'I')
        {
            vals[8]++;
        }
        else if (c == 'j' || c == 'J')
        {
            vals[9]++;
        }
        else if (c == 'k' || c == 'K')
        {
            vals[10]++;
        }
        else if (c == 'l' || c == 'L')
        {
            vals[11]++;
        }
        else if (c == 'm' || c == 'M')
        {
            vals[12]++;
        }
        else if (c == 'n' || c == 'N')
        {
            vals[13]++;
        }
        else if (c == 'o' || c == 'O')
        {
            vals[14]++;
        }
        else if (c == 'p' || c == 'P')
        {
            vals[15]++;
        }
        else if (c == 'q' || c == 'Q')
        {
            vals[16]++;
        }
        else if (c == 'r' || c == 'R')
        {
            vals[17]++;
        }
        else if (c == 's' || c == 'S')
        {
            vals[18]++;
        }
        else if (c == 't' || c == 'T')
        {
            vals[19]++;
        }
        else if (c == 'u' || c == 'U')
        {
            vals[20]++;
        }
        else if (c == 'v' || c == 'V')
        {
            vals[21]++;
        }
        else if (c == 'w' || c == 'W')
        {
            vals[22]++;
        }
        else if (c == 'x' || c == 'X')
        {
            vals[23]++;
        }
        else if (c == 'y' || c == 'Y')
        {
            vals[24]++;
        }
        else if (c == 'z' || c == 'Z')
        {
            vals[25]++;
        }
    }

    // for loop through the length of the chars arr
    for (i = 0; i < ALPHA; i++)
    {
        // if the value of the curr arr idx is greater than 0
        if (vals[i] > 0)
        {
            // print out the current letter and its frequency
            printf("%c\t", chars[i]);

            // print out the stars equal to the frequency
            for (j = 0; j < vals[i]; j++)
            {
                // print out a star
                printf("*");
            }

            // print out a newline
            printf("\n");
        }
    }
}