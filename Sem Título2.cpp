#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float campeonato[3][9];
	int golsMarcados, times, maior, jogos, golsSofridos, resultados, qtdTimes = 3, qtdJogos = 1, qtdPontos = 3;
	
	
	//Inicializando a matriz
	for(times = 0; times < qtdTimes; times++) //percorre as linhas, ou seja, os times
	{
		
		for(jogos = 0; jogos < qtdJogos; jogos++) //percorre as colunas, ou seja, as pontuações
		{
	
			//leitura dos valores
			for(int i = 0; i < 1; i++)
			{
				printf("Quantos gols o time marcou? ");
				scanf("%i", &campeonato[times][5]);
				
				printf("Quantos gols o time sofreu? ");
				scanf("%i", &campeonato[times][6]);
				
				printf("___________________________\n\n");
			}
		}
	}
	
	//Calculando valores
	for(times = 0; times < 1; times++)
	{
		//Calculando saldo de gols
		campeonato[times][7] = campeonato[times][5] - campeonato[times][6];
		
		if(campeonato[times][7] > 0) //Vitória
		{
			campeonato[times][2] = campeonato[times][2] + 1; // Vitória é igual a vitória + incremento de 1;
		}
		else if(campeonato[times][7] == 0) //empate
		{
			campeonato[times][3] = campeonato[times][3] + 1; // Empate é igual a empate + incremento de 1
		}
		else //derrota
		{
			campeonato[times][4] = campeonato[times][4] + 1; // Derrota é igual a derrota + incremento de 1
		}
		
		//Quantidade de jogos
		campeonato[times][1] = campeonato[times][1] + 1;
		
		//Pontos ganhos durante o campeonato
		campeonato[times][0] = campeonato[times][0] + (campeonato[times][2] * qtdPontos + campeonato[times][3]);
		
		//% de aproveitamento no campeonato
		campeonato[times][8] = (campeonato[times][0] / (campeonato[times][1] * 3)) * 100;
	}
	
	for (int i = 0; i < 3; i++)
	{
       printf("\n        PG     J       V      E     D      GM     GC    SG     Aproveitamento");
       
       printf ("\nTime %d ", i);
       
 		for (int j = 0; j < 9; j++)
 		{ 
		    printf ("%.2f  ", campeonato[i][j]);
     	}    
	}
	

	
	return 0;
}
