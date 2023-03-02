#include <stdio.h>
#include <locale.h>

main()
{
	
	//Ler a nota de 4 provas para 5 alunos e imprimir a media da turma e do aluno 
	setlocale(LC_ALL, "Portuguese");
	
	float notas[5][4], mediaTurma, mediaAluno;
	int aluno, nota, alunos =1;
	mediaTurma = 0;
	
	for(aluno = 0; aluno < 2; aluno++)
	{
		printf("Digite as 4 notas do %iº aluno:\n", alunos++);
		
		mediaAluno = 0;

		for(nota = 0; nota < 4; nota++)
		{
			scanf("%f", &notas[aluno][nota]);
			
			mediaAluno = mediaAluno + notas[aluno][nota];
		}
	
		mediaAluno = mediaAluno / 4;
		printf("Média do Aluno: %.2f\n\n", mediaAluno);
		
		mediaTurma = mediaTurma + mediaAluno;
		printf("Soma: %.2f\n");
	}
	
	mediaTurma = mediaAluno / 4;
	printf("Média da Turma: %.2f\n", mediaTurma);
	
	return 0;
}
