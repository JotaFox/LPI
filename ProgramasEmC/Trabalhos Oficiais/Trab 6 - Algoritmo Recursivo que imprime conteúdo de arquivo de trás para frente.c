#include <stdio.h>

void invertPrint(FILE * file);

int main()
{
	FILE * file;
	char strings[100];

	scanf("%s", &strings);

	file = fopen (strings,"r");

	if (file == NULL)
	{
		printf("Ocorreu um erro ao abrir o arquivo!");
	}
	else
	{
		invertPrint(file);
	}

	return 0;
}

void invertPrint(FILE * file)
{
	char caractere;

	caractere = getc(file);

	if(caractere != EOF)
	{
		invertPrint(file);
		printf("%c", caractere);
	}
}
