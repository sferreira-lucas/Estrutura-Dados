#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float campeonato[3][9];
	int aproveitamento, pontosGanhos, pontosPossiveis, saldoGols;
	int vitorias, derrotas, empates, golsMarcados, golsSofridos, jogos, qtdJogos = 1, qtdTimes = 3, time;
	
	printf("---- Tabela do Campeonato ----\n");
	
	vitorias = 0;
	empates = 0;
	derrotas = 0;
	
	for(time = 0; time < qtdTimes; time++)
	{
		for(jogos = 0; jogos < qtdJogos; jogos++)
		{
			printf("Digite o número de vitórias:");
			scanf("%i", &vitorias[time][2]);
			
			printf("Digite o número de empates:");
			scanf("%i", &empates[time][3]);
		
			printf("Digite o número de derrotas:");
			scanf("%i", &derrotas[time][4]);
		
			printf("Digite o número de gols marcados:");
			scanf("%i", &golsMarcados);
			
			printf("Digite o número de gols sofridos:");
			scanf("%i", &golsSofridos);
		
			pontosGanhos = (vitorias * 3) + empates;
		
			saldoGols = golsMarcados - golsSofridos;
		
			pontosPossiveis = jogos * 3;
			aproveitamento = (pontosGanhos / pontosPossiveis) * 100;
		
			printf("Pontos da temporada: %i\n", pontosGanhos);
			printf("Saldo de gols: %i\n", saldoGols);
			printf("Aproveitamento: %i\n", aproveitamento);
	}
	
		
		
		
		printf("\n______________\n");
	}
}
