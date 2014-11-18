#include <stdio.h>

char textoMussum[99999999];
int i, j, contador, teste;

void entradaMussum(void)
{
    while ((textoMussum[i] = getchar()) != EOF)
    {
        i++;
    }
}

void inicializaAuxiliares(void)
{
    i = 0;
    contador = 0;
}

void saidaMussum(void)
{
    for(i = 0; textoMussum[i] != EOF; i++)
    {
        contador++;
        if(textoMussum[i] != ' ')
        {
            if (contador == 80)
            {
                printf("%c\n", textoMussum[i]);
                contador = 0;
            }
            else
            {
                if(textoMussum[i] == '\n')
                contador = 0;
                printf("%c", textoMussum[i]);
            }
        }
        else
        {
            j = 0;
            while ((textoMussum[i+j+1] != EOF) && (textoMussum[i+j+1] != ' '))
            {
                j++;
            }
            teste = contador + j;
            if(teste > 80)
            {
                printf("%c\n", textoMussum[i]);
                contador = 0;
            }
            else
            {
                printf("%c", textoMussum[i]);
            }
        }
    }
}

void main(void)
{
    entradaMussum();
    inicializaAuxiliares();
    saidaMussum();
}
