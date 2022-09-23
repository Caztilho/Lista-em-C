#include <stdio.h>
#include <locale.h>

float cotacaodolar, valordolar;

float conversaoreal(int cd, int vd){
	float valorreal;
	
	valorreal = cd * vd;
	
	return valorreal;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a cotação do dólar: ");
	scanf("%f", &cotacaodolar);
	printf("Digite a quantidade em dólar: ");
	scanf("%f", &valordolar);
	
	printf("%fU$ = %fR$", valordolar, conversaoreal(cotacaodolar, valordolar));
	
}
