// Camila Fernanda Machado Alves Matricula: 11721EBI016

#include <stdio.h>

int main()
{
	int n=0, i;
	char str[256];
	printf("Digite uma mensagem: ");
	scanf("%s", str);
	getchar();
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='0')
			n=0+n*10;
		if(str[i]=='1')
			n=1+n*10;
		if(str[i]=='2')
			n=2+n*10;
		if(str[i]=='3')
			n=3+n*10;
		if(str[i]=='4')
			n=4+n*10;
		if(str[i]=='5')
			n=5+n*10;
		if(str[i]=='6')
			n=6+n*10;
		if(str[i]=='7')
			n=7+n*10;
		if(str[i]=='8')
			n=8+n*10;
		if(str[i]=='9')
			n=9+n*10;
	}
	printf("%d", n);
	return 0;
}
