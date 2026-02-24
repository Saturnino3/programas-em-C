#include <stdio.h> 

int main () {
	
float nota1 = 0, nota2 = 0, nota3 = 0;
scanf("%f %f %f",  &nota1, &nota2, &nota3);

float media = (nota1 + nota2+ nota3) / 3;

if(media >=7) {
	printf("Aprovado! Sua media: %.1f", media);
}else {
	printf("Reprovado! Sua media: %.1f", media);
}


}
