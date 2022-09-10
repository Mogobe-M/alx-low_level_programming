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

  srand(time(0))
    n = srand() - RAND_MAX / 2
    /*source code goes here*/

    if (n > 0)
      {
       printf("%d is positive\n", n);
      }
    else if (n == 0)
      {
       printf("%d is zero\n", n);
      }
    else (n < 0)
	   {
	    printf("%d is negative\n", n);
	   }
  return(0);
}
