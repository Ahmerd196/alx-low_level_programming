#include <stdio.h>
/*
 *main- check the codes
 *
 *
 *always return zero(0)
 */
void reset_to_98(int *m)
{
	*m=98; 
}	


int main(void)
{



	int n;

	n=402;
	printf("n=%d\n",n);
	reset_to_98(&n);
	printf("n=%d\n",n);
	return (0);
}	
