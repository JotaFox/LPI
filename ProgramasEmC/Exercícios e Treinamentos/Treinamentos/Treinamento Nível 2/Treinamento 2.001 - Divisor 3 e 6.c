#include <stdio.h>

int n, DivTres, DivSeis;

void leitura (void){
        printf("Digite o numero que devera ser analisado: ");
        scanf("%d", &n);
}

void processamento (void){
        DivTres = n % 3;
        DivSeis = n % 6;
}

void saida(void){
        if ((DivTres == 0) && (DivSeis == 0)){
                printf("SIM\n");
        }
        else{
                printf("NAO\n");
        }
}

void impressao (void){
        if (n < 0){
                printf("O NUMERO DEVE SER MAIOR OU IGUAL A ZERO\n");
        }
        else{
                processamento();
                saida();
        }
}

void main (void){
        leitura();
        impressao();
}
