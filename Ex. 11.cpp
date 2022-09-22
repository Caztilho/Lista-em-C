#include <stdio.h>
#include <locale.h>

int n, restodois;

void procedimentoporvalor(int x){
	if((x % 2 == 0) && (x % 3 == 0)){
		printf("Valor inválido\n");
	} else {
		printf("O valor não é divisível por 2 e 3\n");
	}
}

void procedimentoporreferencia(int &x, int &rd){
	rd = x % 2;
	x = x % 3;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	procedimentoporvalor(n);
	procedimentoporreferencia(n, restodois);
	
	if((n == 0) && (restodois == 0)){
		printf("\nValor inválido");
	} else {
		printf("\nO valor não é divisível por 2 e 3");
	}
	
}
