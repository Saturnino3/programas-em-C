#include <stdio.h> 

int main () {
printf("Seu valor digitado nao pode estar entre 20 e 30 \n");
int n1 = 0;
scanf("%d", &n1);

if( (n1 >= 20 && n1 <= 30) == !n1 ) {
	printf("Verdadeiro: 1");
} else {
	printf("Falso: 0");
};

}


