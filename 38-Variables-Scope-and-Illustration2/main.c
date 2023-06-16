/*
    Author: Matt Johnson
    Subject: variables scope and illustration part 2
    Purpose:
    Date: 06/15/2023

    Notes:

        'Local variables' exist (memory claimed)
        for the time the function is executed

        Once the function exits, the local variable
        dies (memory reclaimed)

        So, local variables come and go during the
        run-time of the function execution of a
        program

        They don't sit permanently on the data
        memory

        Local variable overwrites global variable
*/

#include <stdio.h>
#include <stdlib.h>

int valueA = 4;

int main(void) {

    printf("Global Value A = %d\n", valueA);

    int valueA = 67;
    printf("Local Value A = %d\n", valueA);

    return 0;
}
