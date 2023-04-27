#include<stdio.h>

/**
 * myFunction - Apply the constructor attribute to myStartupFun() so that it
 *   is executed before main()
 */
void myFunction(void) __attribute__ ((constructor));

/**
 * myFunction - implementation of myFunction
 */
void myFunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
