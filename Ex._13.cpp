#include <stdio.h>
#include <locale.h>

int n;

void positivovalor(int x){
	if(x<0){
		x = x * -1;
	}
	printf("Resultado positivo por valor: %d\n", x);
}

void positivoreferencia(int &x){
	if(x<0){
		x = x * -1;
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	positivovalor(n);
	
	positivoreferencia(n);
	printf("Resultado positivo por refer�ncia: %d\n", n);
	
}
