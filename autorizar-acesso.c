#include <stdio.h> 

int main () {
printf("Validacao de acesso \n");	

int idd = 0;
int senha = 0;
scanf("%d", &idd);
scanf("%d", &senha);

if( idd >= 18 && senha == 1234) {
	printf("Acesso permitido!");
} else {
	printf("Acesso negado!");
}
	
	
}
