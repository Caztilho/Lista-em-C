#include <stdio.h>
#include <locale.h>

	float celsius;
	
	void fahrenheitporvalor(int c){
		float fahrenheit;
		
		fahrenheit = (9 * c + 160) / 5;
		printf("%f°F", fahrenheit);
	}
	
	void fahrenheitporreferencia(float &c){
		c = (9 * c + 160) / 5;
	}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite uma temperatura em Celsius: ");
	scanf("%f", &celsius);
	
	fahrenheitporvalor(celsius);
	fahrenheitporreferencia(celsius);
	printf("\n\n%f°F", celsius);
	
}
