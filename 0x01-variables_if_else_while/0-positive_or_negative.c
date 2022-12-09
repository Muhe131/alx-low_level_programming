#include <stdlib.h>
#include <time.h>
/* Header */

/* This program will assign a random number to the variable n each time it is executed */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* This code writes wether the given random number is positive or negatuvee */
	
	return (0);
}
