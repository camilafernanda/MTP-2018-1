//Camila Fernanda Machado Alves 11721EBI016

#include <stdio.h>

int ackermann(int m, int n)
{
	if(m==0) 
	{
		return n+1;
	}
	else if(n==0) 
	{
		return ackermann(m-1, 1);
	}
	else 
	return ackermann(m-1, ackermann(m, n-1));
}
int main()
{
	int m, n;
	printf("** Funcao de Ackermann **");
	printf("\nDigite o valor m: ");
	scanf("%d", &m);
	getchar();
	printf("\nDigite o valor de n: ");
	scanf("%d", &n);
	getchar();
	printf("\nResultado = %d", ackermann(m,n));
	return 0;
}
