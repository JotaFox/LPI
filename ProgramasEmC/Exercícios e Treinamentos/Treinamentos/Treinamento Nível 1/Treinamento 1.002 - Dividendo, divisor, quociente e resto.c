#include <stdio.h>

int dividendo, divisor, quociente, resto;

void leitura(void){
    scanf ("%d", &dividendo);
    scanf ("%d", &divisor);
}

int calculaDivisao(void){
    quociente = dividendo / divisor;
    return quociente;
}

int calculaResto(void){
    resto = dividendo % divisor;
    return resto;
}

void imprime(void){
    printf("%d \n", dividendo);
    printf("%d \n", divisor);
    printf("%d \n", quociente);
    printf("%d \n", resto);
}



int main(void){
    leitura();
    calculaDivisao();
    calculaResto();
    imprime();
}
