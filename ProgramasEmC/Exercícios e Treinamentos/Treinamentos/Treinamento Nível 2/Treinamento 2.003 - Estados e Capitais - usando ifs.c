#include <stdio.h>
#include <string.h>

void main(void){

    char estado[3];

    printf("Digite a sigla do estado: ");
    gets(estado);

    if ( strcmp(estado,"AC") == 0)
    {
        printf("Acre - Rio Branco");
    }
    else if ( strcmp(estado,"AL") == 0)
    {
        printf("Alagoas - Maceio");
    }
    else if ( strcmp(estado,"AP") == 0)
    {
        printf("Amapa - Macapa");
    }
    else if ( strcmp(estado,"AM") == 0)
    {
        printf("Amazonas - Manaus");
    }
    else if ( strcmp(estado,"BA") == 0)
    {
        printf("Bahia - Salvador");
    }
    else if ( strcmp(estado,"CE") == 0)
    {
        printf("Ceara - Fortaleza");
    }
    else if ( strcmp(estado,"DF") == 0)
    {
        printf("Distrito Federal - Brasilia");
    }
    else if ( strcmp(estado,"ES") == 0)
    {
        printf("Espirito Santo - Vitoria");
    }
    else if ( strcmp(estado,"GO") == 0)
    {
        printf("Goias - Goiania");
    }
    else if ( strcmp(estado,"MA") == 0)
    {
        printf("Maranhao - Sao Luiz");
    }
    else if ( strcmp(estado,"MT") == 0)
    {
        printf("Mato Grosso - Cuiaba");
    }
    else if ( strcmp(estado,"MS") == 0)
    {
        printf("Mato Grosso do Sul - Campo Grande");
    }
    else if ( strcmp(estado,"MG") == 0)
    {
        printf("Minas Gerais - Belo Horizonte");
    }
    else if ( strcmp(estado,"PA") == 0)
    {
        printf("Para - Belem");
    }
    else if ( strcmp(estado,"PB") == 0)
    {
        printf("Paraiba - Joao Pessoa");
    }
    else if ( strcmp(estado,"PR") == 0)
    {
        printf("Parana - Curitiba");
    }
    else if ( strcmp(estado,"PE") == 0)
    {
        printf("Pernambuco - Recife");
    }
    else if ( strcmp(estado,"PI") == 0)
    {
        printf("Piaui - Terezina");
    }
    else if ( strcmp(estado,"RJ") == 0)
    {
        printf("Rio de Janeiro - Rio de Janeiro");
    }
    else if ( strcmp(estado,"RN") == 0)
    {
        printf("Rio Grande do Norte - Natal");
    }
    else if ( strcmp(estado,"RS") == 0)
    {
        printf("Rio Grande do Sul - Porto Alegre");
    }
    else if ( strcmp(estado,"RO") == 0)
    {
        printf("Rondonia - Porto Velho");
    }
    else if ( strcmp(estado,"RR") == 0)
    {
        printf("Roraima - Boa Vista");
    }
    else if ( strcmp(estado,"SC") == 0)
    {
        printf("Santa Catarina - Florianopolis");
    }
    else if ( strcmp(estado,"SP") == 0)
    {
        printf("Sao Paulo - Sao Paulo");
    }
    else if ( strcmp(estado,"SE") == 0)
    {
        printf("Sergipe - Aracaju");
    }
    else if ( strcmp(estado,"TO") == 0)
    {
        printf("Tocantins - Palmas");
    }
    else
    {
        printf("ESTADO INVALIDO");
    }
}
