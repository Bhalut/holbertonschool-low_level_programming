#include <stdio.h>

void bootstrap(void) __attribute__ ((constructor));

/**
 * bootstrap - prints before the main function is executed.
 * Return: void
 */
void bootstrap(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
