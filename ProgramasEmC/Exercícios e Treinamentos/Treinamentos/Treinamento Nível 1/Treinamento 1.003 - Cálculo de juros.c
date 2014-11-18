#include <stdio.h>
#include <math.h>

double emprestimo, divida;

void leitura(void){
    scanf ("%lf", &emprestimo);
}

double calculaDivida(void){
    divida = emprestimo * pow(1.05,6);
    return divida;
}

void imprime(void){
    printf("%.2lf \n", divida);
}



int main(void){
    leitura();

    if (emprestimo < 0)
        printf("O VALOR DO EMPRESTIMO NAO PODE SER NEGATIVO");
    else
    {
        calculaDivida();
        imprime();
    }
}
