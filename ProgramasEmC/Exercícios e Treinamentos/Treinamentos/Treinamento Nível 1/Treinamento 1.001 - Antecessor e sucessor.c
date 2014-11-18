#include <stdio.h>

int numero, antecessor, sucessor;

int leitura(void){
    scanf ("%d", &numero);
    return numero;
}

int calculaAntecessor(void){
    antecessor = numero - 1;
    return antecessor;
}

int calculaSucessor(void){
    sucessor = numero + 1;
    return sucessor;
}

void imprime(void){
    printf("%d\n", antecessor);
    printf("%d\n", sucessor);
}



int main(void){
    leitura();
    calculaAntecessor();
    calculaSucessor();
    imprime();
}
