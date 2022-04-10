#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	D = n % 10;
	if(D>5)
		printf("%s %d is %d and is greater than 5\n", str, n, D);
	else if(D==0)
		printf("%s %d is %d and is 0\n", str, n, D);
	else if(D<6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, D);
	
	return (0);
}
