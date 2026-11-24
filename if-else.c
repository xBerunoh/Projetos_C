#include <stdio.h>

int main() {
	int idade;
	printf("Digite a sua idade");
	scanf("%d",&idade);
	if(idade >= 18){
		// = -> atribuição
		// == -> igualdade
		// >= -> maior igual
		// <= -> menor igual
		// > -> maior
		// < -> menor
		// != diferente
		// && -> AND - E
		// || -> OR - OU
		// 
		printf("Você e maior de idade , esta permitido.");
	}else{
		printf("Você e menor de idade , não pode.");
		
	}

	return 0;
}
