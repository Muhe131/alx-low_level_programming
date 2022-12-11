#include <stdio.h>


/**
 * main - prints the size of various types on the computer
 * it is compiled and run on.
 *
 * Return :Always 0 (success)
 */

int main(void)
{
	printf("sizeof a char: %li byte(s)\n", sizeof(char));
	printf("sizeof int: %li byte(s)\n", sizeof(int));
	printf("sizeof long int: %li byte(s)\n", sizeof(long int));
	printf("sizeof long long int: %li byte(s)\n", sizeof(long long int));
	printf("sizeof float: %li byte(s)\n", sizeof(float));
	return (0);
}
