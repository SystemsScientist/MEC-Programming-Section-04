/*
 * Author: Matt Johnson
 * Subject: variables scope and illustration continued
 * Purpose:
 * Date: 06/15/2023
 *
 * Notes:
 * 	
 */

#include <stdio.h>
#include <stdlib.h>

int a;

int main(void) {

	a = 25;

	{
		int my_var;
		my_var = 45;

		printf("001Value of the local variable 'my_var' is %d\n", my_var);
		printf("002Value of the global variable 'a' is %d\n", a);
	}

	int my_var;
	my_var = my_var + 10; // my_var returns a garbage value - is unpredictable

	printf("003Value of the local variable 'my_var' is %d\n", my_var);

	return 0;
}
