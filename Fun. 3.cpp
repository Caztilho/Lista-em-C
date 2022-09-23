#include <stdio.h>
#include <locale.h>

float taxa, valor;
int tempo;  

float prestacaoematraso(){
	
	float prest;
	
	prest = valor + (valor * (taxa/100) * tempo);
	
	return prest;
}                                       

main(){
	setlocale(LC_ALL, "Portuguese");

	printf("Digite o valor a ser pago: ");
	scanf("%f", &valor);
	printf("Digite a taxa da prestação: ");
	scanf("%f", &taxa);
	printf("Digite o tempo de atraso (meses): ");
	scanf("%d", &tempo);
	printf("O valor da prestação em atraso é de R$%f", prestacaoematraso());
	
}
