#include <stdio.h>

main()
{
	int caractere;
	float totalGeral, totalCaracteres, resposta0, resposta1, resposta2, resposta3, resposta4, resposta5, resposta6, resposta7, resposta8, resposta9, outros;

	float numeroCaractere0 = 0;
	float numeroCaractere1 = 0;
	float numeroCaractere2 = 0;
	float numeroCaractere3 = 0;
	float numeroCaractere4 = 0;
	float numeroCaractere5 = 0;
	float numeroCaractere6 = 0;
	float numeroCaractere7 = 0;
	float numeroCaractere8 = 0;
	float numeroCaractere9 = 0;
	float numeroDeCaracteresGeral = 0;

	while((caractere = getchar())!= EOF)
	{
		switch (caractere)
		{
   			case '0':
     			++numeroCaractere0;
   			break;

   			case '1':
     			++numeroCaractere1;
   			break;

			case '2':
     			++numeroCaractere2;
   			break;

			case '3':
     			++numeroCaractere3;
   			break;

			case '4':
     			++numeroCaractere4;
   			break;

   			case '5':
     			++numeroCaractere5;
   			break;

			case '6':
     			++numeroCaractere6;
   			break;

			case '7':
     			++numeroCaractere7;
   			break;

			case '8':
     			++numeroCaractere8;
   			break;

			case '9':
     			++numeroCaractere9;
   			break;

			default:
     			++numeroDeCaracteresGeral;
		}
	}

	totalCaracteres = numeroCaractere0 + numeroCaractere1 + numeroCaractere2 + numeroCaractere3 + numeroCaractere4 + numeroCaractere5 + numeroCaractere6 + numeroCaractere7 + numeroCaractere8 + numeroCaractere9 + numeroDeCaracteresGeral;

	resposta0 = (numeroCaractere0*100)/totalCaracteres;
    resposta1 = (numeroCaractere1*100)/totalCaracteres;
    resposta2 = (numeroCaractere2*100)/totalCaracteres;
    resposta3 = (numeroCaractere3*100)/totalCaracteres;
    resposta4 = (numeroCaractere4*100)/totalCaracteres;
    resposta5 = (numeroCaractere5*100)/totalCaracteres;
    resposta6 = (numeroCaractere6*100)/totalCaracteres;
    resposta7 = (numeroCaractere7*100)/totalCaracteres;
    resposta8 = (numeroCaractere8*100)/totalCaracteres;
    resposta9 = (numeroCaractere9*100)/totalCaracteres;
    outros = (numeroDeCaracteresGeral*100)/totalCaracteres;

	printf("0 - %.2f% \n", resposta0);
	printf("1 - %.2f% \n", resposta1);
	printf("2 - %.2f% \n", resposta2);
	printf("3 - %.2f% \n", resposta3);
	printf("4 - %.2f% \n", resposta4);
	printf("5 - %.2f% \n", resposta5);
	printf("6 - %.2f% \n", resposta6);
	printf("7 - %.2f% \n", resposta7);
	printf("8 - %.2f% \n", resposta8);
	printf("9 - %.2f% \n", resposta9);
	printf("Outros - %.2f% \n", outros);

}
