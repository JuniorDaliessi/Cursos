#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define MAX 200

typedef struct project{
	int codigo;
	char titulo[30], descricao[50];
	int ano, status;
	char grtProjeto[30], cliente[30],tel[20];
	float valor;
}projetos;

int posicao;
projetos cadastro[MAX];


int main(){
    setlocale(LC_ALL,"Portuguese");

    int selecionaMenu(int menu);
    void cadastrarProjeto(projetos cadastro[MAX]);
    int rotinaImpressao();
    int opc,i;

    system("cls");
    do{
        system("cls");
        opc = selecionaMenu(opc);
        switch(opc){
            case 1: cadastrarProjeto(cadastro);
            break;
            case 2: rotinaImpressao();
            break;
            case 3: system("cls");
                printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
                printf("\n  FIM DO PROGRAMA\n");
                printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
                break;
                system("pause");
            default: system("cls");
                printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
                printf("\n  OPÇÃO INVÁLIDA\n");
                printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
                system("pause");
        }
    }
    while(opc != 3);
return 0;
}
int selecionaMenu(int menu){
    printf("\n  SELECIONE O MENU DESEJADO: \n\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\t1 - Cadastrar Projetos\n");
    printf("\t2 - Rotinas de Impressão\n");
    printf("\t3 - Sair \n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");
    printf("  DIGITE UMA OPÇÃO: ");
    fflush(stdin);
    scanf("%d",&menu);
    return menu;
}
void cadastrarProjeto(projetos cadastro[MAX]){
	system("cls");
	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf("\n  ||| CADASTRANDO PROJETOS |||\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	char resp = 's';
    while(resp == 's' && posicao < MAX){
        posicao++;
        printf("\n  Código: %d \n", posicao);
            //scanf("%d", &cadastro[posicao].codigo);
            cadastro[posicao].codigo = posicao;
            printf("\n\tTítulo do Projeto: ");
            fflush(stdin);
            gets(cadastro[posicao].titulo);
            printf("\n\tDescrição do Projeto: ");
            fflush(stdin);
            gets(cadastro[posicao].descricao);
            printf("\n\tAno do Projeto: ");
            fflush(stdin);
            scanf("%d",&cadastro[posicao].ano);
            printf("\n\tStatus do Projeto: \n");
            printf("\n\t  [1] A Fazer\n\t  [2] Fazendo\n\t  [3] Concluido \n");
            fflush(stdin);
            printf("\n\tDIGITE UMA OPÇÃO: ");
            scanf("%d",&cadastro[posicao].status);
            printf("\n\tGerente de Projeto: ");
            fflush(stdin);
            gets(cadastro[posicao].grtProjeto);
            printf("\n\tCliente do Projeto: ");
            fflush(stdin);
            gets(cadastro[posicao].cliente);
            printf("\n\tTelefone do Cliente: ");
            fflush(stdin);
            gets(cadastro[posicao].tel);
            printf("\n\tValor do Projeto: ");
            fflush(stdin);
            scanf("%f",&cadastro[posicao].valor);
            if(posicao < MAX){
            system("cls");
			printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
            printf("\n  ||| DESEJA CADASTRAR UM NOVO PROJETO: ||| \n");
            printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
			printf("\n\tDIGITE UMA OPÇÃO: [s] Sim [n] Não :");
			fflush(stdin);
			scanf("%c", &resp);
            }else{
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
            printf("\n  ||| Sua base de Dados já chegou ao limite!!! |||\n");
            printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
			resp = 'n';
		}
    }
}
int rotinaImpressao(){
    system("cls");
    void listarTodos();
    void aFazer();
    void fazendo();
    void concluido();
    void gerente(projetos cadastro[MAX]);
    void impAno();
    int opcImp;
    printf("\n  ||| SELECIONE A IMPRESSÃO DESEJADA: ||| \n\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\t1 - Todos os Projetos\n");
    printf("\t2 - Todos os projetos com o Status: A Fazer\n");
    printf("\t3 - Todos os projetos com o Status: Fazendo\n");
    printf("\t4 - Todos os projetos com o Status: Concluído\n");
    printf("\t5 - Por Gerente Responsavel\n");
    printf("\t6 - Por Ano\n");
    printf("\t7 - Voltar \n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");
    printf("  DIGITE UMA OPÇÃO: ");
    fflush(stdin);
    scanf("%d",&opcImp);
    switch(opcImp){
        case 1: listarTodos();
        system("pause");
        break;
        case 2: aFazer();
        system("pause");
        break;
        case 3: fazendo();
        system("pause");
        break;
        case 4: concluido();
        system("pause");
        break;
        case 5: gerente(cadastro);
        system("pause");
        break;
        case 6: impAno();
        system("pause");
        break;
    }
return 0;
}
void listarTodos(){
    int aux;
    system("cls");
    printf("\n  ||| VOCÊ ESCOLHEU LISTAR TODOS |||\n");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("    _CÓDIGO_\t_TITULO_\t_DESCRIÇÃO_\t_ANO_\t_STATUS_  _GERENTE_  _CLIENTE_  _TELEFONE_  _VALOR_\n\n");
    if(posicao > 0){
        for(aux=1;aux<=posicao;aux++){
            printf("        %-8d %-15s %-15s %-10d %-6d %-10s %-10s %-10s R$ %6.2f\n",cadastro[aux].codigo,
                   cadastro[aux].titulo,cadastro[aux].descricao,cadastro[aux].ano,
                   cadastro[aux].status,cadastro[aux].grtProjeto,cadastro[aux].cliente,
                   cadastro[aux].tel,cadastro[aux].valor);
        }
    }else{
        system("cls");
        printf("\n  ||| NENHUM PROJETO FOI CADASTRADO AINDA |||\n");}
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
}
void aFazer(){
    int aux;
    system("cls");
    printf("\n  ||| PROJETOS COM STATUS A FAZER |||\n");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("    _CÓDIGO_\t_TITULO_\t_DESCRIÇÃO_\t_ANO_\t_STATUS_  _GERENTE_  _CLIENTE_  _TELEFONE_  _VALOR_\n\n");
    for(aux=0;aux<=posicao;aux++){
        if(cadastro[aux].status == 1){
            printf("        %-8d %-15s %-15s %-10d %-6d %-10s %-10s %-10s R$ %6.2f\n",cadastro[aux].codigo,
                   cadastro[aux].titulo,cadastro[aux].descricao,cadastro[aux].ano,
                   cadastro[aux].status,cadastro[aux].grtProjeto,cadastro[aux].cliente,
                   cadastro[aux].tel,cadastro[aux].valor);
        }
    }printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
}
void fazendo(){
    int aux;
    system("cls");
    printf("\n  ||| PROJETOS COM STATUS FAZENDO |||\n");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("    _CÓDIGO_\t_TITULO_\t_DESCRIÇÃO_\t_ANO_\t_STATUS_  _GERENTE_  _CLIENTE_  _TELEFONE_  _VALOR_\n\n");
    for(aux=0;aux<=posicao;aux++){
        if(cadastro[aux].status == 2){
            printf("        %-8d %-15s %-15s %-10d %-6d %-10s %-10s %-10s R$ %6.2f\n",cadastro[aux].codigo,
                   cadastro[aux].titulo,cadastro[aux].descricao,cadastro[aux].ano,
                   cadastro[aux].status,cadastro[aux].grtProjeto,cadastro[aux].cliente,
                   cadastro[aux].tel,cadastro[aux].valor);
        }
    }printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
}
void concluido(){
    int aux;
    system("cls");
    printf("\n  ||| PROJETOS COM STATUS CONCLUIDO |||\n");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("    _CÓDIGO_\t_TITULO_\t_DESCRIÇÃO_\t_ANO_\t_STATUS_  _GERENTE_  _CLIENTE_  _TELEFONE_  _VALOR_\n\n");
    for(aux=0;aux<=posicao;aux++){
        if(cadastro[aux].status == 3){
            printf("        %-8d %-15s %-15s %-10d %-6d %-10s %-10s %-10s R$ %6.2f\n",cadastro[aux].codigo,
                   cadastro[aux].titulo,cadastro[aux].descricao,cadastro[aux].ano,
                   cadastro[aux].status,cadastro[aux].grtProjeto,cadastro[aux].cliente,
                   cadastro[aux].tel,cadastro[aux].valor);
        }
    }printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
}
void gerente(projetos cadastro[MAX]){
	system("cls");
	char grt[30];
	int achou, aux;
    printf("\n  ||| PROJETOS POR GERENTE RESPONSAVEL |||\n");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("    Digite o Nome do Gerente (idêntico ao digitado): ");
    fflush(stdin);
    gets(grt);
    system("cls");
	achou = 0;
	aux = 0;
	while((achou == 0) && (aux < MAX)){
        for(aux=0;aux<=posicao;aux++){
            if(strcmp(cadastro[aux].grtProjeto,grt)==0){
                printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
                printf("\n  ||| GERENTE: %s |||\n",grt);
                printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
                printf("    Codigo:\t %d \n",cadastro[aux].codigo);
                printf("    Titulo:\t %s  \n",cadastro[aux].titulo);
                printf("    Descrição: \t %s \n",cadastro[aux].descricao);
                printf("    Ano:\t %d \n",cadastro[aux].ano);
                printf("    Status:\t %d \n",cadastro[aux].status);
                printf("    Gerente:\t %s \n",cadastro[aux].grtProjeto);
                printf("    Cliente:\t %s \n",cadastro[aux].cliente);
                printf("    Telefone:\t %s \n",cadastro[aux].tel);
                printf("    Valor:\t R$ %6.2f \n",cadastro[aux].valor);
                printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
			achou = 1;
			system("Pause");
		}
        }

		aux++;
	}
	if(achou == 0 ){
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("\n  ||| AINDA NÃO HÁ PROJETOS COM GRT %s |||\n",grt);
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
		system("Pause");
	}
}
void impAno(){
    int aux, achou, impAno;
    system("cls");
    printf("\n  ||| PESQUISAR DE PROJETO POR ANO |||\n");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    if(posicao>0){
        printf("    Digite o Ano do Projeto: ");
        fflush(stdin);
        scanf("%d",&impAno);
        achou = 0;
        for(aux=0;aux<=posicao;aux++){
            if(cadastro[aux].ano == impAno){
                //system("cls");
                printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
                printf("\n  ||| PROJETOS EM %d |||\n",impAno);
                printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
                printf("    Codigo:\t %d \n",cadastro[aux].codigo);
                printf("    Titulo:\t %s  \n",cadastro[aux].titulo);
                printf("    Descrição: \t %s \n",cadastro[aux].descricao);
                printf("    Ano:\t %d \n",cadastro[aux].ano);
                printf("    Status:\t %d \n",cadastro[aux].status);
                printf("    Gerente:\t %s \n",cadastro[aux].grtProjeto);
                printf("    Cliente:\t %s \n",cadastro[aux].cliente);
                printf("    Telefone:\t %s \n",cadastro[aux].tel);
                printf("    Valor:\t R$ %6.2f \n",cadastro[aux].valor);
                printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
                achou = 1;
            }
        }
        if(achou == 0){
            system("cls");
            printf("\n  ||| AINDA NÃO HÁ PROJETOS EM %d |||\n",impAno);
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        }
    }
    else{
            system("cls");
        printf("\n  ||| NENHUM PROJETO FOI CADASTRADO AINDA |||\n");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    }
}


