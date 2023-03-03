#include <stdio.h>
#include <locale.h>

main()
{
	
	//Ler a nota de 4 provas para 5 alunos e imprimir a media da turma e do aluno 
	setlocale(LC_ALL, "Portuguese");
	
	float notas[5][4], mediaTurma, mediaAluno;
	int aluno, nota, alunos = 1;
	int quantidadeAluno = 5, quantidadeProva = 4;
	
	mediaTurma = 0;
	
	for(aluno = 0; aluno < quantidadeAluno; aluno++)
	{
		printf("Digite as 4 notas do %iº aluno:\n", alunos++);
		
		mediaAluno = 0;

		for(nota = 0; nota < quantidadeProva; nota++)
		{
			scanf("%f", &notas[aluno][nota]);
			
			mediaAluno = mediaAluno + notas[aluno][nota];
		}
	
		mediaAluno = mediaAluno / quantidadeProva;
		printf("Média do Aluno: %.2f\n\n", mediaAluno);
		
		mediaTurma = mediaTurma + mediaAluno;
	}
	
	mediaTurma = mediaAluno / quantidadeAluno;
	printf("Média da Turma: %.2f\n", mediaTurma);
	
	return 0;
}
