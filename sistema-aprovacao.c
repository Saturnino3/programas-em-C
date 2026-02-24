#include <stdio.h>

int main () {
	
	
	
	float nota1 = 0, nota2 = 0, nota3 = 0, media = 0;
	int faltas = 0;
	printf("Numero de faltas:");
	scanf("%d", &faltas);
	printf("\n");
	printf("Notas: \n");
	scanf("%f %f %f", &nota1, &nota2, &nota3);

	media = (nota1+nota2+nota3) / 3;
	
	if((media >=7 && faltas <= 20) || (media>=6 && faltas<=10) ) {
		printf("Aluno Aprovado: %.1f", media);
		
	} else {
		printf("Aluno Reprovado: %.1f", media);
	}
	
	
	
	
	
	
	
	
	
	
	
}
