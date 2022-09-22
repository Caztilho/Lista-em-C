#include<stdio.h>
#include<locale.h>

int tempo;
float taxa, valor;

void prestacaoporvalor (float x, float y, int z){
	float prest;
	
	prest = x + (x * (y/100) * z);
	printf("Prestação por valor: %f", prest);
}

void prestacaoporreferencia (float &x, float y, int z){

	x = x + (x * (y/100) * z);

}


main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o valor da prestação: ");
	scanf("%f", &valor);
	printf("Digite a taxa da prestação: ");
	scanf("%f", &taxa);
	printf("Digite o tempo de atraso da prestação: ");
	scanf("%d", &tempo);
	
	prestacaoporvalor(valor, taxa, tempo);
	
	prestacaoporreferencia(valor, taxa, tempo);
	printf("\nPrestação por referência: %f", valor);
	
	
}
