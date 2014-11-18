#include <stdio.h>

float M, S, TOTAL;

void leitura(){
    printf("Digite o salário mínimo atual: ");
    scanf("%f", &M);
    printf("Digite o salário ganho pelo indivíduo: ");
    scanf("%f", &S);
}

void processamento(){
    TOTAL = S/M;
}

void saida(){
    printf("Salarios ganhos %.2f", TOTAL);
}

void main (void){
    leitura();
    if ( M <= 0 )
    {
       printf("O SALARIO MINIMO DEVE SER MAIOR QUE ZERO");
    }
    else if ( S < M )
    {
       printf("O SALARIO DO FUNCIONARIO NAO PODE SER MENOR QUE O MINIMO");
    }
    else
    {
        processamento();
        saida();
    }
}
