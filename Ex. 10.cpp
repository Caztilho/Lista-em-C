#include <stdio.h>
#include <locale.h>

int n, restodois;

void procedimentoporvalor(int x){
	if((x % 2 == 0) && (x % 3 == 0)){
		printf("O valor � divis�vel por 2 e 3\n");
	} else {
		printf("Valor inv�lido\n");
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
		printf("\nO valor � divis�vel por 2 e 3");
	} else {
		printf("\nValor inv�lido");
	}
	
}
