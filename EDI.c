#include <stdio.h>

void main() {
    //Numero do Exercicio
    int numEx;
    //Ex1
    int contEx1 = 0;
    int numA, numB;
    //Ex2
    int contEx2 = 0;
    int totalVotos = 0;
    int voto = 0;
    int ze = 0;
    int tainha = 0;
    int xurupita = 0;
    int nulo = 0;
    //Ex3
    int contEx3 = 0;
    int qtdValores = 0;
    float valor = 0;
    float soma = 0;
    float media = 0;
    float maior = 0;
    float menor = 3.402823E+38;
    
    scanf("%d", &numEx);
    
    switch (numEx){
    
        case 0:	
            printf("Hello World!");
        break;
        case 1:
            scanf("%d",&numA);
            scanf("%d",&numB);
    
            for(contEx1 = numA; contEx1 <= numB; contEx1++){
                printf("%d\n", contEx1);
            }
        break;
        case 2:
            scanf("%d",&totalVotos);
            for(contEx2 = 0; contEx2 < totalVotos; contEx2++){
                scanf("%d", &voto);
                if (voto == 1){
                    ze++;
                }
                if (voto == 2){
                    tainha++;
                }
                if (voto == 3){
                    xurupita++;
                }
                if (voto == 0){
                    nulo++;
                }
            }
            if ((ze > tainha) && (ze > xurupita)){
                printf("1");
            }
            else if ((tainha > ze) && (tainha > xurupita)){
                printf("2");
            }
            else if ((xurupita > ze) && (xurupita > tainha)){
                printf("3");
            }
            else if ((ze = tainha) || (ze = xurupita) || (xurupita = tainha)){
                printf("0");
            }
        break;
        case 3:
            scanf("%d",&qtdValores);
            for(contEx3 = 0; contEx3 < qtdValores; contEx3++){
                valor = 0;
                scanf("%f",&valor);
                if (valor > maior) {
                    maior = valor;
                }
                if (valor < menor){
                    menor = valor;
                }
                soma = soma + valor;
            }
            media = soma / qtdValores;
            printf("%.1f\n", soma);
            printf("%.1f\n", media);
            printf("%.1f\n", maior);
            printf("%.1f", menor);
        break;
        case 4:
        //TO-DO
        break;
        case 5:
        //TO-DO
        break;
        case 6:
        //TO-DO
        break;
        case 7:
        //TO-DO
        break;
        case 8:
        //TO-DO
        break;
        case 9:
        //TO-DO
        break;
    }
}
