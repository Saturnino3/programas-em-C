#include <stdio.h>
int main(){
int n1 = 0;
printf("Digite um número inteiro. Se estiver entre 10 e 50, o resultado será 1, caso contrário, 0. \n");
scanf("%d", &n1);

if(n1 >= 10 && n1 <=50) {
	printf("Resultado: 1");
} else {
	printf("Resultado: 0\n");
}

int c = 10;
printf("%zu", sizeof(c));

}
