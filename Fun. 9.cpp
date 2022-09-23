#include <stdio.h>
#include <locale.h>

float fahrenheit;

float conversaocelsius(int f){
	float celsius;
	
	celsius = (f - 32) * 5 / 9;
	
	return celsius;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite uma temperatura em graus fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	printf("%f°F = %f°C", fahrenheit, conversaocelsius(fahrenheit));
	
}
