#include <stdio.h>
#include <math.h>

double area, volume, diametro, lado1, lado2, lado3;


void leituraDosLados(void){
    scanf ("%lf", &lado1);
    scanf ("%lf", &lado2);
    scanf ("%lf", &lado3);
}

double calculaArea(void){
    area = 2 * ((lado1 * lado2) + (lado1 * lado3) + (lado2 * lado3));
    return area;
}

double calculaVolume(void){
    volume = lado1 * lado2 * lado3;
    return volume;
}

double calculaDiametro(void){
    diametro = sqrt( pow(lado1,2) + pow(lado2,2) + pow(lado3,2) );
    return diametro;
}

void imprime(void){
    printf("%.2lf \n", area);
    printf("%.2lf \n", volume);
    printf("%.2lf \n", diametro);
}

int main(void){

    leituraDosLados();
    if (lado1 < 0 || lado2 < 0 || lado3 < 0)
        printf("NENHUM LADO PODE SER NEGATIVO");
    else
    {
        calculaArea();
        calculaVolume();
        calculaDiametro();
        imprime();
    }
}
