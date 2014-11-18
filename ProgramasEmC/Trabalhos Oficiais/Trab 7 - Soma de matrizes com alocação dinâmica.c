#include <stdio.h>
#include <stdlib.h>

char arquivo[30], c;

int main()
{
	int joker = 0;

	while((c = getchar()) && (c != '\n'))
	{
		if(c != '"')
		{
			arquivo[joker] = c;
			joker++;
		}
	}

	FILE *arq = fopen(arquivo, "r");
	int linha, coluna;
	fscanf(arq, "%d;%d\n", &linha, &coluna);

	//MATRIZES
	int i, j;

	//MATRIZ A
	int **matrizA=(int **)malloc(linha*sizeof(int *));
	for(i = 0; i < linha; i++)
	{
		matrizA[i] = (int *)malloc(coluna*sizeof(int));
		for(j = 0; j < coluna; j++)
			fscanf(arq, "%d", &matrizA[i][j]);
	}

	//MATRIZ B
	int **matrizB=(int **)malloc(linha*sizeof(int *));
	for(i = 0; i < linha; i++)
	{
		matrizB[i]=(int *)malloc(coluna*sizeof(int));
		for(j = 0; j < coluna; j++)
			fscanf(arq, "%d", &matrizB[i][j]);
	}

	//MATRIZ C = A + B
	int **matrizC=(int **)malloc(linha*sizeof(int *));
	for(i = 0; i < linha; i++)
	{
		matrizC[i] = (int *)malloc(coluna*sizeof(int));
		for(j = 0; j < coluna; j++)
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
	}

	printf("%d;%d\n", linha, coluna);

	for(i = 0; i < linha; i++)
	{
		for(j = 0; j < coluna; j++)
		{
			if(j == coluna-1) printf("%d", matrizC[i][j]);
			else printf("%d ", matrizC[i][j]);
		}
		printf("\n");
	}

	return 0;
}
