#include <stdio.h>
#include <math.h>

double cateto1, cateto2, hipotenusa;


void leituraDosCatetos(void){
    scanf ("%lf", &cateto1);
    scanf ("%lf", &cateto2);
}

double calculaHipotenusa(void){
    hipotenusa = sqrt((pow(cateto1,2) + pow(cateto2,2)));
    return hipotenusa;
}

void imprime(void){
    printf("%.2lf \n", hipotenusa);
}

int main(void){

    leituraDosCatetos();
    if (cateto1 < 0 || cateto2 < 0)
        printf("NENHUM CATETO PODE SER NEGATIVO");
    else
    {
        calculaHipotenusa();
        imprime();
    }
}
