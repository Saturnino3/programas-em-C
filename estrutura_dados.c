#include <stdio.h>


typedef struct {
	
 int qtd_pregos;
 char ferramenta1[50];
 char ferramenta2[50];
	
	
} caixa_ferramenta;



int main () {

  caixa_ferramenta caixa_vermelha = {25, "Martelo", "Alicate"};
	
	printf("Pregos: %d \n", caixa_vermelha.qtd_pregos );
	printf("Ferramentas: %s \n", caixa_vermelha.ferramenta1 );
	printf("Ferramentas: %s \n", caixa_vermelha.ferramenta2);
	
};
