#include <stdio.h>
#include <locale.h>

int nbase, nexpoente;

int potencia(int base, int expoente){
	int x, resultado = 1;
	
	for(x=1;x<=expoente;x++){
		resultado = resultado * base;
	}
	
	return resultado;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a base da pot�ncia: ");
	scanf("%d", &nbase);
	printf("Digite o expoente da pot�ncia: ");
	scanf("%d", &nexpoente);
	
	printf("O resultado da pot�ncia � igual a: %d", potencia(nbase, nexpoente));
	
}
