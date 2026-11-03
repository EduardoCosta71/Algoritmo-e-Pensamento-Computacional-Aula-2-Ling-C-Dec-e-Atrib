#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	FILE *arquivo;
	long int rgm;
	float nota;
	
	//Estatisticas
	
	int total_estudantes = 0;
	int aprovados = 0;
	float soma_notas = 0.0;
	float maior_nota = 0.0;
	float media_turma = 0.0;
	
	
	arquivo = fopen("nota.txt", "r");
	
	if (arquivo == NULL){
		printf("impossível de abrir o arquivo. Tente novamente.");
		return 1;
	}
	
	while(fscanf(arquivo, "%ld %f", &rgm, &nota)  == 2){
		
		total_estudantes++;
		soma_notas += nota;
		
		if(nota >= 6.0){
			aprovados++;
		}
		
		if(nota > maior_nota){
			maior_nota = nota;
		}
	}
	
	fclose(arquivo);
	
	if(total_estudantes > 0){
		media_turma = soma_notas / total_estudantes;
		
		
		printf("----- Estatisticas da Turma -----\n");
		printf("Quantidade de estudantes:  %d\n ", total_estudantes);
		printf("Media da turma:           %.2f\n", media_turma);
		printf("Maior nota cadastrada:    %.1f\n", maior_nota);
		printf("Alunos aprovados (>= 6.0): %d\n", aprovados);
		printf("-------------------------------\n");
	}
	else{
		
		printf("O arquivo 'nota.txt' está vazio ou não contém dados.");
		
	}
	
	return 0;
}


