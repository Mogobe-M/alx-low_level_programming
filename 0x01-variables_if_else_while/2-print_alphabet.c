#include <stdio.h>
#include <stdlib.h>

/**
 *Main- print lowercase alphabets
 *Discription: using the main function
 *This program prints "lowercase alphabets"
 *Return 0
 **/
int main(void)
{
	char ch = 'a';
	
	while(ch <= 'z')
	  {
	    printf("%c", ch);
	    ch++;
	  }
	
	return (0);

}
