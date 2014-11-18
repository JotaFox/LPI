#include<stdio.h>
#include<string.h>

void main(void)
{
	char vetorA[65],vetorB[65],vetorC[65];
	int A, B;
	int resto=48;
	int i =0;

	scanf("%s",vetorA);
	scanf("%s",vetorB);

	for(i = 63; i >= 0; i = i - 1)
	{
		A = vetorA[i];
		B = vetorB[i];

		if((A + B + resto) == 144)
		{
			vetorC[i] = '0';
			resto = 48;
		}
		else if((A + B + resto) == 145)
		{
			vetorC[i] = '1';
			resto = 48;
		}
		else if((A + B + resto) == 146)
		{
			vetorC[i] = '0';
			resto = 49;
		}
		else if((A + B + resto) == 147)
		{
			vetorC[i] = '1';
			resto = 49;
		}
	}

	vetorC[64]='\0';

	printf("%s",vetorC);
}