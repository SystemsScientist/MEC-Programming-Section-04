/*
    Author: Matt Johnson
    Subject: sizeof operator
    Purpose:
    Date: 06/11/2023

    Requirements


*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    printf("Size of char data type = %d byte\n", sizeof(char));
    printf("Size of short data type = %d bytes\n", sizeof(short));
    printf("Size of int data type = %d bytes\n", sizeof(int));
    printf("Size of long data type = %d bytes\n", sizeof(long));
    printf("Size of long long data type = %d bytes\n", sizeof(long long));

    long long myLongHistory = 900;
    printf("\nSize of long long myLongHistory = %d bytes\n", sizeof(myLongHistory));

    char sizeVariable = sizeof(myLongHistory);
    printf("Size of char sizeVariable = %d bytes\n", sizeVariable);

    return 0;
}
