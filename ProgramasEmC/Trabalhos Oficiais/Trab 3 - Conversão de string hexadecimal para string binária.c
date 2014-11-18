#include <stdio.h>

int i;
char hexa[8];

void leituraDoHexadecimal(void);
void impressaoDoBinario(void);

void main(void)
{
    leituraDoHexadecimal();
    impressaoDoBinario();
}

 void leituraDoHexadecimal(void)
 {
    for (i=0;i<8;i++)
 	{
        hexa[i]=getchar();
    }
 }

void impressaoDoBinario(void)
{
	for (i=0;i<8;i++)
	{
        	if (hexa[i]=='0')
        	{
			printf("0000");
        	}
		if (hexa[i]=='1')
		{
           		 printf("0001");
        	}
		if (hexa[i]=='2')
		{
			printf("0010");
        	}
		if (hexa[i]=='3')
		{
			printf("0011");
        	}
		if (hexa[i]=='4')
		{
			printf("0100");
        	}
		if (hexa[i]=='5')
		{
			printf("0101");
        	}
		if (hexa[i]=='6')
		{
			printf("0110");
        	}
		if (hexa[i]=='7')
		{
			printf("0111");
        	}
		if (hexa[i]=='8')
		{
			printf("1000");
        	}
		if (hexa[i]=='9')
		{
			printf("1001");
        	}
		if ((hexa[i]=='a')||(hexa[i]=='A'))
		{
			printf("1010");
        	}
		if ((hexa[i]=='b')||(hexa[i]=='B'))
		{
			printf("1011");
        	}
		if ((hexa[i]=='c')||(hexa[i]=='C'))
		{
			printf("1100");
        	}
		if ((hexa[i]=='d')||(hexa[i]=='D'))
		{
			printf("1101");
        	}
		if ((hexa[i]=='e')||(hexa[i]=='E'))
		{
			printf("1110");
        	}
		if ((hexa[i]=='f')||(hexa[i]=='F'))
		{
			printf("1111");
        	}
    }
}
