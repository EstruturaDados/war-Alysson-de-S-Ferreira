#include <stdio.h>
#include <stdlib.h>

//Definição dos limites de caracteres das variáveis
#define MAX_TROPAS 5
#define TAM_NOME 30
#define TAM_COR 10

//Criação da struct território
struct territorio {
char nome[TAM_NOME];
char cor[TAM_COR];
int tropas;
};

//Limpeza de dados 
void limparBufferEntrada () {
int c;
while ((c = getchar()) != '\n' && c != EOF);
}


void mostrarTerritorios(struct territorio biblioteca[MAX_TROPAS], int TOTAL) { 
    //Apresentação de dados:
    
    printf("\n\n");
    for (int i = 0; i < TOTAL; i++) {
        printf("   Dados dos territórios: \n\n");
        printf("Território: %d\n", i+1);
        printf("Nome do Território: %s", biblioteca[i].nome);
        printf("Cor do Exército: %s", biblioteca[i].cor);
        printf("Numero de Tropas: %d", biblioteca[i].tropas);
        }
    
    }

//Inicio do código
int main (){

    //Controle da quantidade de territórios quye serão criados
    struct territorio biblioteca [MAX_TROPAS];
    int TotalTropas = 0;

    //Cadastro dos territórios - entrada de dados dos 5 territórios.
    for (TotalTropas = 0; TotalTropas < MAX_TROPAS; TotalTropas++) {
        
        

        printf(" Vamos cadastrar o território numero %d-\n", TotalTropas +1);

        printf("Digite o Nome do Território: ");
        fgets(biblioteca[TotalTropas].nome, TAM_NOME, stdin);

        printf("Cor do Exército: ");
        fgets(biblioteca[TotalTropas].cor, TAM_COR, stdin);

        printf("Numero de Tropas: ");
        scanf("%d", &biblioteca[TotalTropas].tropas);
        limparBufferEntrada();
        printf("\n");

    }
    
    mostrarTerritorios(biblioteca, MAX_TROPAS);





return 0;
}
