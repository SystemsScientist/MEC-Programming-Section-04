/*
    Author: Matt Johnson
    Subject: variables scope and illustration
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
*/

#include <stdio.h>
#include <stdlib.h>

// function prototype
void myFunction1 (void);

int myScore;

int main(void) {

    int myScore;

    myScore = 900;
    printf("001Value of the variable myScore = %d\n", myScore);

    // function call
    myFunction1();

    return 0;
}

void myFunction1 (void) {

    myScore = 800;
    printf("002Value of the variable myScore = %d", myScore);
}
