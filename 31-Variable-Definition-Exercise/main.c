/*
    Author: Matt Johnson
    Subject: variable definition
    Purpose:
    Date: 06/10/2023

    Requirements

        1. Create the variables to hold the data
        2. Compute the sum of the data
        3. Store the result
        4. Print the result as shown in the format
           (see sketch in the video)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    unsigned char distanceA2B = 160;
    unsigned char distanceB2C = 40;
    unsigned char distanceA2C;

    distanceA2C = distanceA2B + distanceB2C;
    printf("Total distance from A to C = %d Km\n", distanceA2C);
    printf("%x is the hexadecimal number for %d\n", distanceA2C, distanceA2C);
    printf("%o is the octal number for %d\n", distanceA2C, distanceA2C);

    return 0;
}
