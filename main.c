#include <stdio.h>
#define limpar printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

int menuNav, i, id;

typedef struct {
    char nome[50];
    float valor;
    int codigo;
    int carrinho;
} Produtos;

int aprovados, reprovados;
float carrinhoTotal;
double dinheiro = 2000;
float media = 0;
int quantiaTotal = 0;
int produtos = 0;
Produtos produto[100];

// ___  ___                  ______       _____           _           _
// |  \/  |                  |  _  \     /  __ \         | |         | |
// | .  . | ___ _ __  _   _  | | | |___  | /  \/ __ _  __| | __ _ ___| |_ _ __ ___
// | |\/| |/ _ \ '_ \| | | | | | | / _ \ | |    / _` |/ _` |/ _` / __| __| '__/ _ \
// | |  | |  __/ | | | |_| | | |/ /  __/ | \__/\ (_| | (_| | (_| \__ \ |_| | | (_) |
// \_|  |_/\___|_| |_|\__,_| |___/ \___|  \____/\__,_|\__,_|\__,_|___/\__|_|  \___/

void cadastrar() {
    limpar;
    printf("\n\n\n - - - - - - - - - - - - - - - - - - - - - - - - \n");
    printf("    Digite o nome do produto             \n");
    printf(" - - - - - - - - - - - - - - - - - - - - - - - -  \n");
    scanf(" %[^\n]", produto[quantiaTotal].nome);

    printf(" - - - - - - - - - - - - - - - - - - - - - - - - \n");
    printf("   Digite o codigo do produto               \n");
    printf(" - - - - - - - - - - - - - - - - - - - - - - - - \n");
    scanf("%d", &produto[quantiaTotal].codigo);

    printf(" - - - - - - - - - - - - - - - - - - - - - - - - \n");
    printf("   Digite o valor do produto            \n");
    printf(" - - - - - - - - - - - - - - - - - - - - - - - - \n");
    scanf("%f", &produto[quantiaTotal].valor);
    quantiaTotal++;
    produtos++;

    printf("\n\nDigite 1 para cadastrar um novo produto, ou qualquer outro valor para retornar ao menu\n\n");
    scanf("%d", &menuNav);
    if(menuNav == 1) {
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

void listar() {
    limpar;
    printf("\t\t\t _________________________________________________\n");
    printf("\t\t\t|                                                 |\n");
    printf("\t\t\t|                  LISTA DE PRODUTOS                |\n");
    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");

    for(i=0; i<produtos; i++) {
        printf("\t\t\t                        ID %d                   \n", i);
        printf("\t\t\t   Nome: %s                                     \n", produto[i].nome);
        printf("\t\t\t   Codigo: %d\n", produto[i].codigo);
        printf("\t\t\t   Valor: %.2f\n", produto[i].valor);
        printf("\t\t\t  - - - - - - - - - - - - - - - - - - - - - - - - \n");
    }
    printf("\t\t\t|                                                 |\n");
    printf("\t\t\t|                                                 |\n");
    printf("\t\t\t _________________________________________________\n");
    printf("\n\nDigite qualquer valor para retornar ao menu\n\n");
    scanf("%d", &menuNav);
    main();
}

//  _____                 _       _           
// /  __ \               (_)     | |          
// | /  \/ __ _ _ __ _ __ _ _ __ | |__   ___  
// | |    / _` | '__| '__| | '_ \| '_ \ / _ \ 
// | \__/\ (_| | |  | |  | | | | | | | | (_) |
// \____/\__,_|_|  |_|  |_|_| |_|_| |_|\___/ 

void carrinho() {
    limpar;
    printf("\t\t\t _________________________________________________\n");
    printf("\t\t\t|                                                 |\n");
    printf("\t\t\t|                   SEU CARRINHO                  |\n");
    for(i=0; i<produtos; i++) {
        if(produto[i].carrinho == 1) {
            printf("\t\t\t                        ID %d                   \n", i);
            printf("\t\t\t   Nome: %s                                     \n", produto[i].nome);
            printf("\t\t\t   Codigo: %d\n", produto[i].codigo);
            printf("\t\t\t   Valor: %.2f\n", produto[i].valor);
            printf("\t\t\t  - - - - - - - - - - - - - - - - - - - - - - - - \n");
        } else {
            break;
        }
    }
    printf("\t\t\t|                                                 |\n");
    printf("\t\t\t|           Valor total dos itens:                |\n");
    printf("\t\t\t|                   %.2f                             |\n", carrinhoTotal);
    printf("\t\t\t _________________________________________________\n");
    printf("\n\nDigite qualquer valor para retornar ao menu\n\n");
    scanf("%d", &menuNav);
    main();
}

//  _____ ________  _______________  ___  ______ 
// /  __ \  _  |  \/  || ___ \ ___ \/ _ \ | ___ \
// | /  \/ | | | .  . || |_/ / |_/ / /_\ \| |_/ /
// | |   | | | | |\/| ||  __/|    /|  _  ||    / 
// | \__/\ \_/ / |  | || |   | |\ \| | | || |\ \ 
//  \____/\___/\_|  |_/\_|   \_| \_\_| |_/\_| \_|

void comprarProduto() {
    limpar;
    printf("\t\t\t _________________________________________________\n");
    printf("\t\t\t|                                                 |\n");
    printf("\t\t\t|               DIGITE O ID DO PRODUTO            |\n");
    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    scanf("%d", &id);
    
    if (id >= 0 && id < quantiaTotal && produto[id].codigo != 0) {
        limpar;
        printf("\t\t\t _________________________________________________\n");
        printf("\t\t\t|                                                 |\n");
        printf("\t\t\t|  O PRODUTO %s FOI ADICIONADO AO SEU CARRINHO    |\n", produto[id].nome);
        printf("\t\t\t _________________________________________________\n");
        produto[id].carrinho = 1;
        carrinhoTotal += produto[id].valor;
    } else {
        limpar;
        printf("\t\t\t _________________________________________________\n");
        printf("\t\t\t|                                                 |\n");
        printf("\t\t\t|  PRODUTO NÃO ENCONTRADO OU NÃO CADASTRADO       |\n");
        printf("\t\t\t _________________________________________________\n");
    }

    printf("\n\nDigite qualquer valor para retornar ao menu\n\n");
    scanf("%d", &menuNav);
    main();
}

void fecharPedido() {
    if(dinheiro > carrinhoTotal) {
        printf("\t\t\t _________________________________________________________\n");
        printf("\t\t\t|                                                         |\n");
        printf("\t\t\t|                                                         |\n");
        printf("\t\t\t|  LEGAL! VOCÊ COMPROU TODOS OS PRODUTOS DO SEU CARRINHO  |\n");
        printf("\t\t\t|                                                         |\n");
        printf("\t\t\t _________________________________________________________\n");
        for(i=0; i<produtos; i++) {
            produto[i].carrinho = 0;
        }
        dinheiro -= carrinhoTotal;
        carrinhoTotal = 0;
        printf("\n\nDigite qualquer valor para retornar ao menu\n\n");
        
        scanf("%d", &menuNav);
        main();
    }
}


// ___  ___                  ______     _            _             _
// |  \/  |                  | ___ \   (_)          (_)           | |
// | .  . | ___ _ __  _   _  | |_/ / __ _ _ __   ___ _ _ __   __ _| |
// | |\/| |/ _ \ '_ \| | | | |  __/ '__| | '_ \ / __| | '_ \ / _` | |
// | |  | |  __/ | | | |_| | | |  | |  | | | | | (__| | |_) | (_| | |
// \_|  |_/\___|_| |_|\__,_| \_|  |_|  |_|_| |_|\___|_| .__/ \__,_|_|
//                                                    | |
//                                                    |_|


int main(void) {
	limpar
	printf("\t\t\t _________________________________________________\n");
	printf("\t\t\t|                                                 |\n");
	printf("\t\t\t|                     CADASTRO                    |\n");
	printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
	printf("\t\t\t|                                                 |\n");
	printf("\t\t\t|    Seu saldo: %.2f                           |\n", dinheiro);
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
		carrinho();
		break;
	case 4:
		comprarProduto();
	case 5:
	    fecharPedido();
	default:
		break;
	}

}
