#include <stdio.h> 

int main () {
	printf("Teste de temperatura\n");
	float temp = 0;
	scanf("%f", &temp);
	if(temp < 0 || temp > 100) {
		printf("True\n");
	} else {
		printf("False\n");
	}
	
		printf("Validacao de horario\n");
	int hora = 0;
	int minuto = 0;
	scanf("%d %d", &hora, &minuto);
	
	if( (hora > 0 && hora < 23) && (minuto > 0 && minuto < 59)  ) {
		printf("1\n");
	} else {
		printf("0\n");
	}
	
	printf("Teste de lógica\n");
	int a = 0;
	int b = 0;
	
	scanf("%d %d", &a, &b);
	if( (a > b || a == b) && (a >= 0 && b >= 0) ) {
		printf("True");
		
	} else {
		printf("False");
	}
	
	
	
} 


	
	
	

