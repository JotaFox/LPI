#include <stdio.h>
#include <math.h>

double emprestimo, divida, juros, meses, auxiliar;

void leituraDoEmprestimo(void){
    scanf ("%lf", &emprestimo);
}

void leituraDosJuros(void){
    scanf ("%lf", &juros);
}

void leituraDosMeses(void){
    scanf ("%lf", &meses);
}

double calculaDivida(void){
    auxiliar = 1 + (juros/100);
    divida = emprestimo * pow(auxiliar,meses);
    return divida;
}

void imprime(void){
    printf("%.2lf \n", divida);
}

int main(void){

    leituraDoEmprestimo();
    if (emprestimo < 0)
        printf("O VALOR DO EMPRESTIMO NAO PODE SER NEGATIVO");
    else
    {
        leituraDosJuros();
        if (juros < 0)
            printf("A TAXA DE JUROS NAO PODE SER NEGATIVA");
        else
        {
            leituraDosMeses();
            if (meses < 0)
                printf("A QUANTIDADE DE MESES NAO PODE SER NEGATIVA");
            else
            {
                calculaDivida();
                imprime();
            }
        }
    }
}
