#include<stdio.h>
#include<conio.h>

int main (void )
{
  float matriz[3][9];
  int golsmarcados, golscontra, resultado;

//Inicialização da matriz

 for (int i=0; i<3; i++ )
 for (int j=0; j<9; j++  )
     matriz[i][j]=0;
  
  //Leitura dos valores
  for (int i=0; i<1; i++ ){
 
      printf ("\nQuantos gols o time marcou?\n\n");
      scanf ("%f", &matriz[i][5]);
     // scanf ("%d", &golsmarcados); 
      printf ("\nQuantos gols o time sofreu?\n\n");
     scanf ("%f", &matriz[i][6]);
     // scanf ("%d", &golscontra); 
}
  
  //Calculo dos Valores na Matriz 

  for (int i=0; i<1; i++ )
    { //gols - Saldo de Gols
        //resultado = golsmarcados-golscontra;
        matriz[i][7] = matriz[i][5]-matriz[i][6];
        //Vitoria, Empate, Derrota
       if (matriz[i][7]>0) //Vitoria - resultado>0
       {  matriz[i][2]=matriz[i][2]+1;
                   }
       else if (matriz[i][7]==0) //Empate -  resultado==0
       { matriz[i][3]=matriz[i][3]+1;
            }
       else {
            //Derrota
            matriz[i][4]=matriz[i][4]+1;
            }
       //Jogos
       matriz[i][1] = matriz[i][1] +1;
      //PontosGanhos
      matriz[i][0] = matriz[i][0]+(matriz[i][2]*3+matriz[i][3]);
      
      //Aproveitamento 
      matriz[i][8]= (matriz[i][0]/(matriz[i][1]*3))*100;
    
    }
    
    //Apresentar os resultados
    
   for (int i=0; i<1; i++ ){
       printf("\n        PG    J      V     E    D     GP    GC   SG    Aroveitamento");
       printf ("\nTime %d ",i);
 for (int j=0; j<9; j++  )
 { printf ("%.2f  ", matriz[i][j] );
     
     }
     
}
  
  getch();
  return(0);
}
