#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

struct funcionarios{
    char nome[20];
    float salarioLiquido;
    float salarioFinal;
};

int main(){
    setlocale(LC_ALL,"Portuguese");

    const float REAJUSTE = 7.5;
    const float ABONO = 150;
    int i;
    int qFuncionarios;

    printf("\n*********************************************");
    printf("\n  EMPRESA:  PALM PARK");
    printf("\n  NOME:     AMAURI APARECIDO DALIESSI JUNIOR");
    printf("\n  RA:       XXXXXXXX-X");
    printf("\n*********************************************");

    printf("\n  Reajuste salarial de 7,5%\n");
    printf("  Sal�rios reajustados at� R$ 1.750,00 Reais");
    printf("\n  Receber� um abono de R$ 150,00 Reais\n");

    printf("\n  Qauntidade de FUNCION�RIOS para calculo DO REAJUSTE: ");
    scanf("%d",&qFuncionarios);
    struct funcionarios func[qFuncionarios];

    for(i=0;i<qFuncionarios;i++){
        printf("\n  Cadastrando o(a) %d� de %d funcion�rios(a): ",i+1,qFuncionarios);
        printf("\n*******************************************");
        printf("\n  Informe o nome do(a) %d� funcion�rio(a): ",i+1);
        fflush(stdin);
        gets(func[i].nome);
        printf("\n  Informe o sal�rio l�quido do(a) funcion�rio(a) %s: R$ ",func[i].nome);
        fflush(stdin);
        scanf("%f",&func[i].salarioLiquido);
        func[i].salarioFinal = func[i].salarioLiquido + (func[i].salarioLiquido/100)*REAJUSTE;
        if(func[i].salarioFinal <= 1750){
        	func[i].salarioFinal = func[i].salarioFinal + ABONO;
        }

    }
        printf("\n  LISTAGEM COMPLETA\n");
    	printf("--------------------------------------------------------------\n");
    	printf("  FUNCION�RIOS\t\tSALARIO_LIQUIDO\t\tSAL�RIO_FINAL\n\n");
    	for (i=0; i<qFuncionarios; i++){
        	printf("   %s\t\t  R$ %6.2f\t\t  R$ %6.2f\n",func[i].nome,func[i].salarioLiquido,func[i].salarioFinal);
    }
	printf("-------------------------------------------------------------------\n");
return 0;
}

