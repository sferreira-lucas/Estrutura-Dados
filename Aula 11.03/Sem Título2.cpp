#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float campeonato[3][9];
	int times, tabela;
	int golsMarcados, golsSofridos, resultado, pontoVitoria = 3;
	
	for(int i = 0; i < 1; i++)
	for(int j = 0; j < 1; j++)
		campeonato[3][9] = 0;
		
		for(int i = 0; i < 1; i++)
		{
			printf("Quantos gols o time marcou? ");
			scanf("%d", &campeonato[i][5]);
			
			printf("Quantos gols o time sofreu? ");
			scanf("%d", &campeonato[i][6]);
		}
	
	
 	 for(int i = 0; i < 1; i++)
    { //gols - Saldo de Gols
        
		//resultado = golsmarcados-golscontra;
        campeonato[i][7] = campeonato[i][5] - campeonato[i][6];
        
		//Vitoria, Empate, Derrota
       if (campeonato[i][7] > 0) //Vitoria - resultado > 0
        {  
	   		campeonato[i][2] = campeonato[i][2] + 1;
        }
       else if (campeonato[i][7] == 0) //Empate -  resultado==0
       { 
	   		campeonato[i][3] = campeonato[i][3] + 1;
    	}
       else
	   {
        	//Derrota
          campeonato[i][4] = campeonato[i][4] + 1;
        }
       
	    //Jogos
       campeonato[i][1] = campeonato[i][1] + 1;
       
      //PontosGanhos
      campeonato[i][0] = campeonato[i][0] + (campeonato[i][2] * 3 + campeonato[i][3]);
      
      //Aproveitamento 
      campeonato[i][8] = (campeonato[i][0] / (campeonato[i][1] * 3)) * 100;
        
    }
    
    //Apresentar os resultados
    
   for (int i = 0; i < 1; i++ )
   {
       printf("\n        PG  |  J  |  V  |  E  |  D  |  GP  |  GC  | SG  |  Aproveitamento");
       printf ("\nTime %d ", i);
       
 		for (int j = 0; j < 9; j++)
 		{ printf ("%.2f | ", campeonato[i][j]);
     
     	}
	}
	
	
	
	
	
	return 0;
}
