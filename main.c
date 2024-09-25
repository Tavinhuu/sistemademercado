#include <stdio.h>
#define limpar printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

int menuNav, i;

typedef struct{

    char nome[50];
    float valor;
    int codigo;

}Produtos;

int aprovados,reprovados;

float media = 0;
int quantiaTotal = 0;
int produtos = 1;
Produtos produto[100];


// ___  ___                  ______       _____           _           _             
// |  \/  |                  |  _  \     /  __ \         | |         | |            
// | .  . | ___ _ __  _   _  | | | |___  | /  \/ __ _  __| | __ _ ___| |_ _ __ ___  
// | |\/| |/ _ \ '_ \| | | | | | | / _ \ | |    / _` |/ _` |/ _` / __| __| '__/ _ \ 
// | |  | |  __/ | | | |_| | | |/ /  __/ | \__/\ (_| | (_| | (_| \__ \ |_| | | (_) |
// \_|  |_/\___|_| |_|\__,_| |___/ \___|  \____/\__,_|\__,_|\__,_|___/\__|_|  \___/ 
                                                                                 
                                                                                 

void cadastrar(){
    limpar
	printf("\n\n\n - - - - - - - - - - - - - - - - - - - - - - - - \n");
	printf("    Digite o nome do produto             \n");
    printf(" - - - - - - - - - - - - - - - - - - - - - - - -  \n");
    scanf(" %[^\n]", produto[quantiaTotal].nome);


	printf(" - - - - - - - - - - - - - - - - - - - - - - - - \n");
	printf("   Digite o codigo do produto               \n");
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - \n");
    scanf("%d", &produto[quantiaTotal].codigo);


	printf(" - - - - - - - - - - - - - - - - - - - - - - - - \n");
	printf("   Digite a valor do produto            \n");
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - \n");
    scanf("%f", &produto[quantiaTotal].valor);
    quantiaTotal ++;
    produtos++;

    printf("\n\nDigite 1 para cadastrar um novo produto, ou qualquer outro valor para retornar ao menu\n\n");
    scanf("%d", &menuNav);
    if(menuNav == 1){

        cadastrar();

    } else {
        main();
    }
}

//  _     _     _                            
// | |   (_)   | |                         
// | |    _ ___| |_ __ _    
// | |   | / __| __/ _` | 
// | |___| \__ \ || (_| |
// \_____/_|___/\__\__,_|
                                                                                                                  

void listar(){
        limpar
        printf("\t\t\t _________________________________________________\n");
        printf("\t\t\t|                                                 |\n");
        printf("\t\t\t|                  LISTA DE PRODUTOS                |\n");
        printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");

    for(i=0;i<produtos;i++){
        printf("\t\t\t                      produto %d                   \n", i);
        printf("\t\t\t   Nome: %s                                     \n", produto[i].nome);
        printf("\t\t\t   Codigo: %d\n", produto[i].codigo);
        printf("\t\t\t   Valor: %d\n", produto[i].valor);
        printf("\t\t\t  - - - - - - - - - - - - - - - - - - - - - - - - \n");

    }
        printf("\t\t\t|                                                 |\n");
        printf("\t\t\t|                                                 |\n");
        printf("\t\t\t _________________________________________________\n");
    printf("\n\nDigite qualquer valor para retornar ao menu\n\n");
    scanf("%d", &menuNav);
    main();



}

// ___  ___                  ______     _            _             _ 
// |  \/  |                  | ___ \   (_)          (_)           | |
// | .  . | ___ _ __  _   _  | |_/ / __ _ _ __   ___ _ _ __   __ _| |
// | |\/| |/ _ \ '_ \| | | | |  __/ '__| | '_ \ / __| | '_ \ / _` | | 
// | |  | |  __/ | | | |_| | | |  | |  | | | | | (__| | |_) | (_| | |
// \_|  |_/\___|_| |_|\__,_| \_|  |_|  |_|_| |_|\___|_| .__/ \__,_|_|
//                                                    | |            
//                                                    |_|            


int main(void){
    limpar
	printf("\t\t\t _________________________________________________\n");
	printf("\t\t\t|                                                 |\n");
	printf("\t\t\t|                     CADASTRO                    |\n");
	printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
	printf("\t\t\t|                                                 |\n");
	printf("\t\t\t|    1 -  Cadastrar um novo produto               |\n");
	printf("\t\t\t|    2  -  Listar produtos                        |\n");
	printf("\t\t\t|    3  -  Ver carrinho                           |\n");
	printf("\t\t\t|    4  -  Comprar produto                        |\n");
    printf("\t\t\t|    5  -  Fechar pedido                          |\n");
	printf("\t\t\t|_________________________________________________|\n");

    scanf("%d", &menuNav);
    switch (menuNav)
    {
    case 1:
        cadastrar();
        break;
    case 2:
        listar();
        break;
    case 3:
        pesquisar();
        break;
    case 4:
        relatorio();
    default:
        break;
    }

}
