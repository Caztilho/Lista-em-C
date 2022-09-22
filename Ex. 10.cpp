#include <stdio.h>
#include <locale.h>

int n, restodois;

void procedimentoporvalor(int x){
	if((x % 2 == 0) && (x % 3 == 0)){
		printf("O valor é divisível por 2 e 3\n");
	} else {
		printf("Valor inválido\n");
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
		printf("\nO valor é divisível por 2 e 3");
	} else {
		printf("\nValor inválido");
	}
	
}
