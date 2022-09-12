#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /**
  *Main- print is the number is positive, zero or negative
  *Discription: using the main function
  *This program prints ""programming is positive, zero or negative
  *Return 0
  **/

int main(void)
{

  int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*source code goes here*/

	if (n > 0)
	  {
	    printf("Last digit of n is %d greater than 5 \n", n);
	  }
	else if (n == 0)
	  {
	    printf("Last digit of n is %d is zero\n", n);
	  }
	else if ( n < 6)
	  {
	    printf("Last digit of n is %d and is less than 6 and not 0\n", n);
	  }
	return(0);
}
