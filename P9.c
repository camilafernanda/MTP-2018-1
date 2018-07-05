// Camila Fernanda Machado Alves 11721EBI016

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Dimensao
{
	float largura;
	float profundidade;
	float altura;
};

struct Produto
{
	char nome[64];
	float preco;
	struct Dimensao end;
};

void Cadastro(struct Produto vet_prod[], int i)
{
	printf("\nDigite o nome: ");
	fgets(vet_prod[i].nome, 64, stdin);
	printf("\nDigite o preco: ");
	scanf("%f", &vet_prod[i].preco);
	getchar();
	printf("\nDigite a largura: ");
	scanf("%f", &vet_prod[i].end.largura);
	getchar();
	printf("\nDigite a profundidade: ");
	scanf("%f", &vet_prod[i].end.profundidade);
	getchar();
	printf("\nDigite a altura: ");
	scanf("%f", &vet_prod[i].end.altura);
	getchar();
}
void Pesquisa(struct Produto vet_prod[], int i)
{
	char cond[64];
	strcpy(cond, " ");
	if(strcmp(cond, vet_prod[i].nome) == 0)
	{
		printf("\nProduto nao cadastrado!");
	}
	else
	{
		printf("\n %s, R$ %.2f, L: %.2fm x P: %.2fm x A: %.2fm",vet_prod[i].nome, vet_prod[i].preco, vet_prod[i].end.largura, vet_prod[i].end.profundidade, vet_prod[i].end.altura);
	}
}
int main()
{
	struct Produto vet_prod[2];
	int op, prod, num_prod = 0;
	strcpy(vet_prod[0].nome, " ");
	strcpy(vet_prod[1].nome, " ");
	do{
	printf("\n1) Cadastro\n2) Consulta\n3) Sair do programa\nUsuario, digite uma opcao: ");
	scanf("%d", &op);
	getchar();  
	switch(op)
	{
		case 1: 
			printf("\nEscolha o produto 1 ou 2: ");
			scanf("%d", &prod);
			getchar();
			switch(prod)
			{
				case 1:
					num_prod = prod-1;
					Cadastro(vet_prod, num_prod);
					printf("\nProduto 1 cadastrado com sucesso!");
					num_prod = 0;
					break;
				case 2:
					num_prod = prod-1;
					Cadastro(vet_prod, num_prod);
					printf("\nProduto 2 cadastrado com sucesso!");
					num_prod = 0;
					break;
				default:
					break;
			}
			break;
		case 2:	
			printf("\nEscolha o produto 1 ou 2: ");
			scanf("%d", &prod);
			getchar();
			switch(prod)
			{
				case 1:
					num_prod = prod-1;
					Pesquisa(vet_prod, num_prod);
					num_prod = 0;
					break;
				case 2:
					num_prod = prod-1;
					Pesquisa(vet_prod, num_prod);
					num_prod = 0;
					break;
				default:
					break;
			}
			break;
		case 3:
			return 0;
		default: 
			break;
	}	
	}while(op!= 4);
	return 0;
}
