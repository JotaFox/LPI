#include <stdio.h>
#include <math.h>

double lado, perimetro, area, diagonal;

void leituraDoLado(void){
    scanf ("%lf", &lado);
}

double calculaPerimetro(void){
    perimetro = 4 * lado;
    return perimetro;
}

double calculaArea(void){
    area = pow(lado,2);
    return area;
}

double calculaDiagonal(void){
    diagonal = lado * sqrt(2);
    return diagonal;
}

void imprime(void){
    printf("%.2lf \n", perimetro);
    printf("%.2lf \n", area);
    printf("%.2lf \n", diagonal);
}

int main(void){

    leituraDoLado();
    if (lado < 0)
        printf("O LADO NAO PODE SER NEGATIVO");
    else
    {
        calculaPerimetro();
        calculaArea();
        calculaDiagonal();
        imprime();
    }
}
