#include <stdio.h>

#define LOWER -10
#define UPPER 50
#define STEP 10

void main(void)
{	
	float celsius, fahr;

	celsius = LOWER;

	while (celsius <= UPPER)
	{
		fahr = ((9*celsius)/5) + 32; 
		printf ("%.2f\t%.2f\n", celsius, fahr);
		celsius = celsius + STEP;
	}
}
