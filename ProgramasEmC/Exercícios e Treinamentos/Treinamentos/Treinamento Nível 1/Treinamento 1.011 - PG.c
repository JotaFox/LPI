#include <stdio.h>
#include <math.h>

//T = N-ésimo termo, P = Primeiro termo, R = Razão, N = Quantidade de termos

int T, P, R, N, aux;

void leitura(){
    printf("Digite a razão da PG:");
    scanf("%d", &R);
    printf("Digite o primeiro termo da PG:");
    scanf("%d", &P);
    printf("Digite a quantidade de termos da PG:");
    scanf("%d", &N);
}

void processamento(){
    aux = (int) pow(R, (N-1));
    T = P*aux;
}

void saida(){
    printf("N-esimo termo: %d", T);
}

void main (void){
    leitura();
    if ( N <= 0 )
    {
       printf("A QUANTIDADE DE TERMOS DEVE SER MAIOR QUE ZERO");
    }
    else
    {
        processamento();
        saida();
    }
}
