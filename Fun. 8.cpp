#include <stdio.h>
#include <locale.h>

float cotacaodolar, valorreal;

float conversaodolar(int cd, int vr){
	float valordolar;
	
	valordolar = vr / cd;
	
	return valordolar;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a cotação do dólar: ");
	scanf("%f", &cotacaodolar);
	printf("Digite a quantidade em real: ");
	scanf("%f", &valorreal);
	
	printf("%fR$ = %fU$", valorreal, conversaodolar(cotacaodolar, valorreal));
	
}
