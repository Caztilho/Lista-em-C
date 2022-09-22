#include <stdio.h>
#include <locale.h>

	float cd, qd;
	
	void procedimentoporvalor(float x, float y){
		
		float r;
		r = x * y;
		printf("%fR$", r);
		
	}
	
	void procedimentoporreferencia(float &x, float y){
		
		x = x * y;	
		
	}



main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a cotação do dólar:\n ");
	scanf("%f", &cd);
	printf("Digite a quantidade de dolar para ser convertido:\n ");
	scanf("%f", &qd);
	
	procedimentoporvalor(cd, qd);
	
	procedimentoporreferencia(cd, qd);
	printf("\n\n%fR$", cd);
	
}
