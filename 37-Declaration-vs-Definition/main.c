/*
    Author: Matt Johnson
    Subject: declaration vs definition
    Purpose:
    Date: 06/15/2023

    Requirements

        'extern' keyword tells the compiler that
        this variable is defined outside of the
        scope of this file.

*/

#include <stdio.h>
#include <stdlib.h>

// extern int myExamScore;

int main(void) {

    // local variable
    int myExamScore;

    myExamScore = 540;

    printf("myExamScore = %d\n", myExamScore);

    return 0;
}
