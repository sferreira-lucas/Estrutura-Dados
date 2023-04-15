#include<stdio.h>
#include<locale.h>

int somatoria(int num)
{
	if(num == 1)
	return (1);
	
	return num + somatoria(num - 1);
}


int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	printf("A soma de 1 a %i é %d", num, somatoria(num));
	
	return 0;
}
