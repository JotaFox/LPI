#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979

double raio, perimetro, area;


void leituraDoRaio(void){
    scanf ("%lf", &raio);
}

double calculaPerimetro(void){
    perimetro = 2 * PI * raio;
    return perimetro;
}

double calculaArea(void){
    area = PI * pow(raio,2);
    return area;
}

void imprime(void){
    printf("%.2lf \n", perimetro);
    printf("%.2lf \n", area);
}

int main(void){

    leituraDoRaio();
    if (raio < 0)
        printf("O RAIO NAO PODE SER NEGATIVO");
    else
    {
        calculaPerimetro();
        calculaArea();
        imprime();
    }
}
