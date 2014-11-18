#include <stdio.h>

main()
{
	int caractere, numeroDeEspacos, numeroDeTabulacoes, numeroDeLinhas;

	numeroDeEspacos = 0;
	numeroDeTabulacoes = 0;
	numeroDeLinhas = 0;
	
	while((caractere = getchar())!= EOF)
	{
		if (caractere == ' ')
		{
			++numeroDeEspacos;
		}
		if (caractere == '\t')
		{
			++numeroDeTabulacoes;
		}
		if (caractere == '\n')
		{
			++numeroDeLinhas;
		}
	}
	printf("Numero de Espaços: %d\n", numeroDeEspacos);
	printf("Numero de Tabulações: %d\n", numeroDeTabulacoes);
	printf("Numero de Linhas: %d\n", numeroDeLinhas);
}