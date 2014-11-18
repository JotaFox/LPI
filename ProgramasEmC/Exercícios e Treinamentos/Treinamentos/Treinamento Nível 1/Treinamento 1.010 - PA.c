#include <stdio.h>

//T = N-ésimo termo, P = Primeiro termo, R = Razão, N = Quantidade de termos

    int T, P, R, N;

void leitura(){
    printf("Digite a razão da PA:");
    scanf("%d", &R);
    printf("Digite o primeiro termo da PA:");
    scanf("%d", &P);
    printf("Digite a quantidade de termos da PA:");
    scanf("%d", &N);
}

void processamento(){
    T = P+(N-1)*R;
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
