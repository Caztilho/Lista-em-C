#include <stdio.h>
#include <locale.h>

int a, b, c;

int somadosquadrados(int n1, int n2, int n3){
	int resultado;
	
	resultado = n1 + n2 + n3;
	resultado = resultado * resultado;
	
	return resultado;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um valor para A: ");
	scanf("%d", &a);
	printf("Digite um valor para B: ");
	scanf("%d", &b);
	printf("Digite um valor para B: ");
	scanf("%d", &c);
	
	printf("O resultado da soma dos quadrados é igual a: %d", somadosquadrados(a, b, c));
	
}
