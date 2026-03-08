#include <stdio.h>


int main () {
	int i;
	int acima;
	int qt_veiculos = 0;
	int dados = 0;
	float media = 0;
	scanf("%d", &qt_veiculos);
	
	int decremento(int a) {
		return a = a - 1;
	};

	
	if(qt_veiculos <= 100) {
		
		int velocidade[qt_veiculos];
		int infratores[qt_veiculos];
		
		for(i = 0; i<= decremento(qt_veiculos); i++) {
		  printf("Velocidades: ");
		  scanf("%d", &velocidade[i]);  		  
		};
		 printf("---------------------------------------\n");
		for(i = 0; i<= decremento(qt_veiculos); i++) {
			dados = dados + velocidade[i];
		};
		media = dados / qt_veiculos;
		printf("Media de Velocidade: %.2f \n", media);
		
		for(i = 0; i<= decremento(qt_veiculos); i++) {
			if(velocidade[i] > 80) {
				infratores[i] = velocidade[i];
				printf("Infracoes: %d \n", infratores[i]);
			}
		}
		
	}
	
 

	
}

	 
	
	
	
	
	
	
