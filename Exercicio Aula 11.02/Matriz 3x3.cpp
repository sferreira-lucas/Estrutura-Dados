#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	 Uma matriz de 3 linhas por 3 colunas do tipo inteiro e qual maior e menor elemento
	*/
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[3][3], i, j, maior = 0, menor = 0;
	
	for(i = 0; i < 3; ++i)
	{
		for(j = 0; j < 3; ++j)
		{	
			printf("Digite um valor para [%d] [%d]", i+1, j+1);
			scanf("%d", &matriz[i][j]);	
			
			if(matriz[i][j] > maior)
			{
				maior = matriz[i][j];
			}
			if(matriz[i][j] < menor || (i == 0 && j == 0))
			{
				menor = matriz[i][j];
			}
		}
	}
	
	printf("O menor elemento é: [%d]\n", menor);
	printf("O maior elemento é: [%d]\n", maior);
	
	return 0;
}
