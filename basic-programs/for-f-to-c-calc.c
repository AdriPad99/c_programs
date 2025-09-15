#include <stdio.h>

#define LOWER 0 /* lower limit of the table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

/*f to c table*/

int main(void)
{
    // assign f
    int fahr;

    // // for loop converting f to c (starting at 0 f)
    // for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    // {
    //     printf("%3d%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    // }

    // // for loop converting f to c (starting at 300 f)
    // for (fahr = 300; fahr >= 0; fahr -= 20)
    // {
    //     printf("%3d%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    // }

    // // for loop converting f to c (using symbolic constants)
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
}