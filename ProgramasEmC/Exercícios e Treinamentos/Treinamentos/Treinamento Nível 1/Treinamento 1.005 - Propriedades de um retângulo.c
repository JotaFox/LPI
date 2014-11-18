#include <stdio.h>
#include <math.h>

double base, altura, perimetro, area, diagonal;

void leituraDaBase(void){
    scanf ("%lf", &base);
}

void leituraDaAltura(void){
    scanf ("%lf", &altura);
}

double calculaPerimetro(void){
    perimetro = 2 * (base + altura);
    return perimetro;
}

double calculaArea(void){
    area = base * altura;
    return area;
}

double calculaDiagonal(void){
    diagonal = sqrt((pow(base,2) + pow(altura,2)));
    return diagonal;
}

void imprime(void){
    printf("%.2lf \n", perimetro);
    printf("%.2lf \n", area);
    printf("%.2lf \n", diagonal);
}

int main(void){

    leituraDaBase();
    if (base < 0)
        printf("A BASE NAO PODE SER NEGATIVA");
    else
    {
        leituraDaAltura();
        if (altura < 0)
            printf("A ALTURA NAO PODE SER NEGATIVA");
        else
        {
            calculaPerimetro();
            calculaArea();
            calculaDiagonal();
            imprime();
        }
    }
}
