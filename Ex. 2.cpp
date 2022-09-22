#include<stdio.h>
#include<locale.h>

int n, s;


void procedimentoporvalor(int y){
	
	int s;
	int x;
	for(x = 1; x <= y; x++){
		s = s + x;
	}
	printf("%d", s);
	
}

void procedimentoporreferencia(int y, int &s){
 
	int x;
	
	for(x = 1; x <= y; x++){
		s = s + x;
	}
	
}

	


main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um número: ");
	scanf("%d",&n);
	
	procedimentoporvalor(n);
	s = 0;
	procedimentoporreferencia(n, s);
	printf("\n\n%d", s);
}
	
	
	
	
