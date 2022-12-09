#include <stdio.h>


/**
 * main -entry
 *
 * Return :Always 0 (success)
 */

int main(void)
{
	printf("sizeof a char:%lu byte(s)\n", sizeof(char));
	printf("sizeof int:%lu byte(s)\n", sizeof(int));
	printf("sizeof long int:%lu byte(s)\n", sizeof(long int));
	printf("sizeof long long int:%lu byte(s)\n", sizeof(long long int));
	printf("sizeof float:%lu byte(s)\n", sizeof(float));
	return (0);
}
