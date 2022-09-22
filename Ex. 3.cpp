#include<stdio.h>
#include<locale.h>


int n, b, x;


void procedimentoporvalor(int y){
	int auxiliar, x;
	int a, b;
	a = 0;
	b = 1;
		
		printf("\n\n1");
		for(x = 0; x < y; x++) {
	
		
	
	        auxiliar = a + b;
	        a = b;
	        b = auxiliar;
		
		printf("\n\n%d", auxiliar);
		
	}
}

void procedimentoporreferencia(int y, int &b){
	
	int auxiliar, x;
	int a;
	a = 0;
	b = 1;
	
		printf("\n\n1");
		for(x = 0; x < y; x++) {
	
		
		
	        auxiliar = a + b;
	        a = b;
	        b = auxiliar;
	        
	        
	        printf("\n\n%d", b);
}
}





main(){
	setlocale(LC_ALL,"Portuguese");

	printf("Digite um número: ");
	scanf("%d", &n);

	procedimentoporvalor(n);
	
	procedimentoporreferencia(n, b);
	
	
	


}

