#include <stdio.h>  
#include <string.h> 

typedef struct{ 
 	char nome[51], matricula[13], endereco[66], cpf[12], codBanco[4], agencia[6], conta[9]; 
 	float valorHora; 
}funcionario; 

typedef struct{ 
 	char matricula[13]; 
 	int totalDeHorasTrabalhadas; 
}cargaHoraria; 
 
typedef struct{ 
 	char nome[51], cpf[12], codBanco[4], agencia[6], conta[9]; 
 	float salario; 
}salario; 
 
 
salario folhaPagamento[10]; 
 
void leituraDadosFuncionarios(funcionario[]); 
void leituraDeHorasTrabalhadas(cargaHoraria[]); 
void calcularSalarios(funcionario[],cargaHoraria[]);
void mergeSort(int,int,int);  
void MergeSortFolhaDePagamento(int, int); 
salario preencher(salario); 
void criarFolhaPagamento(void); 
 
 
int main() 
{ 
 	funcionario funcionarios[10]; 
 	cargaHoraria horasTrabalhadas[10];
 	leituraDadosFuncionarios(funcionarios); 
 	leituraDeHorasTrabalhadas(horasTrabalhadas); 
 	calcularSalarios(funcionarios,horasTrabalhadas); 
 	MergeSortFolhaDePagamento(0,9); 
 	criarFolhaPagamento(); 
 	return 0; 
} 
 
void leituraDadosFuncionarios(funcionario funcionarios[]) 
{ 
 	int i = 0; 
 	FILE * file;

	file = fopen("Funcionarios.txt","r");

 	if(file==NULL) 
 	{ 
 		fprintf(stderr,"Não foi possível ler o arquivo Funcionarios.txt!"); 
 		exit(1); 
 	} 
 	else 
 	{ 
 		for(i=0;i<10;i++) 
 		{ 
 			fgets(funcionarios[i].nome,51,file); 
 			fgetc(file); 
			fgets(funcionarios[i].matricula,13,file); 
			fgetc(file); 
			fgets(funcionarios[i].endereco,66,file); 
			fgetc(file); 
			fgets(funcionarios[i].cpf,12,file); 
			fgetc(file); 
			fgets(funcionarios[i].codBanco,4,file); 
			fgetc(file); 
			fgets(funcionarios[i].agencia,6,file); 
			fgetc(file); 
			fgets(funcionarios[i].conta,9,file); 
			fscanf(file," %f ",&funcionarios[i].valorHora); 
 			if(ferror(file)) 
 			{ 
 				fprintf(stderr,"Houve um erro e não foi possível ler o arquivo Funcionarios.txt!"); 
 				exit(2); 
 			} 
		} 
 		fclose(file); 
 		if(ferror(file)) 
 		{ 
 			fprintf(stderr,"Houve um erro ao tentar fechar o arquivo Funcionarios.txt!"); 
 			exit(3); 
 		} 
 	} 
} 
		 
void leituraDeHorasTrabalhadas(cargaHoraria horasTrabalhadas[]) 
{ 
	 
	int i = 0;
	char linha[9999]; 
	FILE * file;

	file = fopen("Novembro.txt","r");

	if(file==NULL) 
	{ 
		fprintf(stderr,"Não foi possível realizar a leitura do arquivo Novembro.txt!"); 
		exit(1); 
	} 
	else 
	{ 
		for(i=0;i<10;i++) 
		{ 
			if(fgets(linha,10000,file)!=NULL) 
			{ 
				sscanf(linha,"%12s/%d",horasTrabalhadas[i].matricula,&horasTrabalhadas[i].totalDeHorasTrabalhadas); 
			} 
			if(ferror(file)) 
			{ 
				fprintf(stderr,"Houve um erro na leitura do arquivo Novembro.txt!"); 
				exit(2); 
			} 
		}

		fclose(file);

		if(ferror(file)) 
		{ 
			fprintf(stderr,"Houve um erro ao fechar o arquivo Novembro.txt!"); 
			exit(3); 
		} 
	} 
} 

void calcularSalarios(funcionario funcionarios[],cargaHoraria horasTrabalhadas[]) 
{

	int i,j; 
	for(i=0;i<10;i++) 
	{ 
		for(j=0; strcmp(funcionarios[i].matricula,horasTrabalhadas[j].matricula) != 0; j++); 	
			strcpy(folhaPagamento[i].nome,funcionarios[i].nome); 
			strcpy(folhaPagamento[i].cpf,funcionarios[i].cpf); 
			strcpy(folhaPagamento[i].codBanco,funcionarios[i].codBanco); 
			strcpy(folhaPagamento[i].agencia,funcionarios[i].agencia); 
			strcpy(folhaPagamento[i].conta,funcionarios[i].conta); 
			folhaPagamento[i].salario = funcionarios[i].valorHora * horasTrabalhadas[j].totalDeHorasTrabalhadas; 		
	} 
} 

void mergeSort(int inicio, int div, int final) 
{ 
	salario aux[final-inicio+1]; 
	int i = inicio,j = div+1,k = 0;

	while((i <= div)&&(j <= final)) 
	{ 
		if(strcmp(folhaPagamento[i].nome,folhaPagamento[j].nome) > 0) 
		{ 
			aux[k] = preencher(folhaPagamento[j]); 
			j++; 
		} 
		else
		{
			aux[k] = preencher(folhaPagamento[i]); 
			i++; 
		} 
	k++; 
	} 
	while(i <= div) 
	{ 
		aux[k] = preencher(folhaPagamento[i]); 	
		i++; 
		k++; 
	} 
	while(j <= final) 
	{ 
		aux[k] = preencher(folhaPagamento[j]); 
		j++; 
		k++; 
	} 
	for(i = inicio, j = 0; i <= final && j < (final-inicio+1); i++, j++) 
	{ 
		folhaPagamento[i] = preencher(aux[j]); 
	} 
}

void MergeSortFolhaDePagamento(int inicial, int final) 
{ 
	int i; 
	if(final > inicial) 
	{ 
		i = floor((final + inicial)/2); 
		MergeSortFolhaDePagamento(inicial,i); 
		MergeSortFolhaDePagamento(i+1,final); 
		mergeSort(inicial,i,final); 
	} 
} 

salario preencher(salario salarioDoFuncionario) 
{ 
	salario copia; 
	strcpy(copia.nome,salarioDoFuncionario.nome); 
	strcpy(copia.cpf,salarioDoFuncionario.cpf); 
	strcpy(copia.codBanco,salarioDoFuncionario.codBanco); 
	strcpy(copia.agencia,salarioDoFuncionario.agencia); 
	strcpy(copia.conta,salarioDoFuncionario.conta); 
	copia.salario = salarioDoFuncionario.salario; 
	return copia; 
} 

void criarFolhaPagamento() 
{ 
	int i; 
	for(i=0;i<10;i++) 
	{ 
		printf("%s|%s|%s|%s|%s|%.2f\n",folhaPagamento[i].nome,folhaPagamento[i].cpf,folhaPagamento[i].codBanco,folhaPagamento[i].agencia,folhaPagamento[i].conta,folhaPagamento[i].salario); 
	} 
}




