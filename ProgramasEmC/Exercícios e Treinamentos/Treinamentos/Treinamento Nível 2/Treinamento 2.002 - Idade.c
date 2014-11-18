#include <stdio.h>

int i;

void leitura (void){
        printf("Digite a idade da pessoa: ");
        scanf("%d", &i);
}

void processamento (void){
        if ((i >= 10) && (i <= 18)){
                printf("SIM\n");
        }
        else{
                printf("NAO\n");
        }
}

void impressao (void){
        if (i < 0){
                printf("A IDADE DEVE SER MAIOR OU IGUAL A ZERO\n");
        }
        else{
                processamento();
        }
}

void main (void){
        leitura();
        impressao();
}
