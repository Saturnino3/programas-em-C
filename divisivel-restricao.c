#include <stdio.h> 

int main () {

int n1 = 0;
scanf("%d", &n1);

if(  (n1 % 3 ==  0 && n1 % 5 == 0) == !n1 ) {
	printf("1");
}  else {
    printf("0");
}

}
