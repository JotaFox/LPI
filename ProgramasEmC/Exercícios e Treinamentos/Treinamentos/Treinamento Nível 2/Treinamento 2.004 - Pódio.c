#include <stdio.h>

int Camila, Leandro, Rodrigo;

void leituraDosPontos(){
    printf("Digite a pontucao da Camila: \n");
    scanf("%d",&Camila);
    printf("Digite a pontucao do Leandro: \n");
    scanf("%d",&Leandro);
    printf("Digite a pontucao do Rodrigo: \n");
    scanf("%d",&Rodrigo);
}

void processaPodio(){
    if ( (Camila<=0) || (Leandro<=0) || (Rodrigo<=0) )
    {
       printf("AS PONTUACOES DEVEM SER MAIORES QUE ZERO");
    }
    else if ( (Camila==Rodrigo) || (Camila==Leandro) || (Rodrigo==Leandro) )
    {
       printf("AS PONTUACOES DEVEM SER DIFERENTES");
    }
    else if ((Camila>Leandro) && (Camila>Leandro) && (Leandro>Rodrigo))
    {
       printf("1o Lugar - Camila\n2o Lugar - Leandro\n3o Lugar - Rodrigo");
    }
    else if ((Camila>Leandro) && (Camila>Leandro) && (Leandro<Rodrigo))
    {
       printf("1o Lugar - Rodrigo\n2o Lugar - Camila\n3o Lugar - Leandro");
    }
    else if ((Leandro>Rodrigo) && (Leandro>Camila) && (Rodrigo>Camila))
    {
       printf("1o Lugar - Leandro\n2o Lugar - Rodrigo\n3o Lugar - Camila");
    }
    else if ((Leandro>Rodrigo) && (Leandro>Camila) && (Rodrigo<Camila))
    {
       printf("1o Lugar - Leandro\n2o Lugar - Camila\n3o Lugar - Rodrigo");
    }
    else if ((Rodrigo>Leandro) && (Rodrigo>Camila) && (Leandro>Camila))
    {
       printf("1o Lugar - Rodrigo\n2o Lugar - Leandro\n3o Lugar - Camila");
    }
    else if ((Rodrigo>Leandro) && (Rodrigo>Camila) && (Leandro<Camila))
    {
       printf("1o Lugar - Rodrigo\n2o Lugar - Camila\n3o Lugar - Camila");
    }
}

void main (void){

    leituraDosPontos();
    processaPodio();

}
