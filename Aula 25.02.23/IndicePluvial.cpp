#include <stdio.h>
#include <locale.h>

int main()
{
    
    
  /*Um centro meteorológico distribuiu dispositivos para registrar índices pluviométricos em
um conjunto de 7 cidades de uma região (identificadas por códigos numéricos de 1 a 7)
durante 6 meses(Jan a Jun), onde, para cada mês foi registrado um valor real que corresponde ao índice
pluviométrico total do mês.
Escreva um programa que leia os 6 índices pluviométricos de cada uma das sete cidades e
imprima:
a) O índice de pluviosidade médio mensal de cada cidade;
b) O índice de pluviosidade média de cada mês na região.
*/

	setlocale(LC_ALL, "Portuguese");
	
	float mediaCidade, mediaRegiao, soma;
	float valor_pluv[7][6]; 
	int cidade, mes, cidadex = 1, nMes = 1, numCidade = 2, numMes = 3;
	
	for (cidade = 0; cidade < numCidade; cidade++)
	{
    	nMes = 1;
		printf("Informe o indice pluvial da cidade %i: \n", cidadex++);
		
		mediaCidade = 0;
		
		for(mes = 0; mes < numMes; mes++)
		{
			printf("Mês %i:", nMes++);
			scanf("%f", &valor_pluv[cidade][mes]);
			
			mediaCidade = mediaCidade + valor_pluv[cidade][mes];
		}
		
		mediaCidade = mediaCidade / numMes;
		printf("%.2f\n", mediaCidade);
		
	}
	
	for(mes = 0; mes < numMes; mes++)
	{
	    mediaRegiao = 0;
	    nMes = 1;
	    
	    for(cidade = 0; cidade < numCidade; cidade++)
	    {
	        mediaRegiao = mediaRegiao + valor_pluv[cidade][mes];
	        
	    }
	 mediaRegiao = mediaRegiao / numCidade;
	 
	 printf("Média no mês %i: %.2f\n", nMes++, mediaRegiao);
	    
	}
	return 0;
}

