#include <stdio.h>
#include <string.h>

     int main()
     {
     	char stringBin[32],pontoFlutuante[30];
     	int i=0,j=0,vezesDois=1,e='0';

     	gets(stringBin);

     	if (stringBin[i]=='0')
     		pontoFlutuante[j]='+';
    	else
    	{
    		pontoFlutuante[j]='-';
    		e+=vezesDois;
    	}
    	pontoFlutuante[1]='1';
    	pontoFlutuante[2]=',';
    	for (i=1;i<9;i++)
    	{
    		vezesDois*=2;
    		if (i==1)
    			pontoFlutuante[1]='1';
    		else if (i==2)
    			pontoFlutuante[2]=',';
    		if (stringBin[i]=='1')
    			e+=vezesDois;
    	}
    	for (j=3;j<26;j++)
    	{
    		pontoFlutuante[j]=stringBin[j+6];
    	}

    	pontoFlutuante[j]='*';
    	pontoFlutuante[++j]='2';
    	pontoFlutuante[++j]='^';
    	pontoFlutuante[++j]=e-127;

    	printf("%s",pontoFlutuante);
    }
