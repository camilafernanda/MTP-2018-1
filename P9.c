// Camila Fernanda Machado Alves 11721EBI016

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Dimensoes
{
    float largura;
    float profundidade;
    float altura;
}Dimensoes;

typedef struct Produto
{
    char nome[64];
    float preco;
    Dimensoes dimensoes;
}Produto;

void cadastra(Produto * p)
{
    printf("\nDigite o nome do produto: ");
    fgets(p->nome, 64, stdin);
    p->nome[strlen(p->nome)-1] = '\0';
    printf("\nDigite o preco: ");
    scanf("%f", &(p->preco));
    getchar();
    printf("\nDigite a largura: ");
    scanf("%f", &(p->dimensoes.largura));
    getchar();
    printf("\nDigite a profundidade: ");
    scanf("%f", &(p->dimensoes.profundidade));
    getchar();
    printf("\nDigite a altura: ");
    scanf("%f", &(p->dimensoes.altura));
    getchar();
}

void consulta(Produto * p)
{
    char c;
    if(strlen(p->nome) == 0)
	{
        printf("\nProduto nao cadastrado!\n");
        while((c=getchar()) != '\n');
        return;
    }
    printf("\n%s, R$ %.2f, L: %.2fm x P: %.2fm x A: %.2fm\n", p->nome, p->preco,(p->dimensoes.largura),(p->dimensoes.profundidade), (p->dimensoes.altura));
    while((c=getchar())!='\n');
}

int main()
{
    int opcao1=0, opcao2=0;
    Produto * produtos = calloc(2, sizeof(Produto));

    char sub[2][16] = {"Cadastro", "Consulta"};
    while(opcao1 != 3)
	{
        printf("\nMENU\n");
        printf("\n1) Cadastrar\n2) Consulta\n3) Sair\n> ");
        scanf("%d", &opcao1);
        getchar();
        opcao2 = 0;
        switch(opcao1)
		{
            case 1: case 2:
                while(opcao2!=3)
		{
                    printf("\nRealizar %s\n", sub[opcao1-1]);
                    printf("\n1) Produto 1\n2) Produto 2\n3) Voltar\n> ");
                    scanf("%d", &opcao2);
                    getchar();
                    switch(opcao2)
		   {
                        case 1: case 2:
                            printf("\nProduto %d\n", opcao2);
                            if(opcao1==1)
                                cadastra(&produtos[opcao2-1]);
                            if(opcao1==2)
                                consulta(&produtos[opcao2-1]);
                            opcao2=3;
                            break;
                        default:
                            if(opcao2!=3)
                                printf("\nOpcao invalida!\n");
                            break;
                    }
                }
                break;
            default:
                if(opcao1!=3)
                    printf("\nOpcao invalida!\n");
                break;
        }
    }
    free(produtos);
    return 0;
}
