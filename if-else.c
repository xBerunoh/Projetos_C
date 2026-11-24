#include <stdio.h>

int main() {
	int num1, num2;
	printf("Digite o numero 1: ");
	scanf("%d",&num1);
	printf("Digite o numero 2: ");
	scanf("%d",&num2);
	printf("Soma: %d + %d = %d \n", num1,num2,num1+num2);
	printf("Multiplicação: %d * %d = %d \n", num1,num2,num1*num2);
	printf("Divisao: %d / %d = %d \n", num1,num2,num1/num2);
	printf("Subtracao: %d - %d = %d \n", num1,num2,num1-num2);
	printf("Modulo: %d %% %d = %d \n", num1,num2,num1%num2);


	return 0;
}
