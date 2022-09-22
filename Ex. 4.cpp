#include<stdio.h>
#include<locale.h>

int b, e, res;

void procedimentoporvalor(int z, int c){
	int x, res;
	res = 1;
	
	for(x = 1; x <= c; x++){
		res = res * z; 
		
	}
	printf("%d", res);
}

void procedimentoporreferencia(int z, int c, int &res){
	int x;
	res = 1;
	
	for(x = 1; x <= c; x++){
		res = res * z;	
	}
}



main(){
	setlocale(LC_ALL,"Portuguese");

	printf("Digite a base: ");
	scanf("%d", &b);
	printf("Digite o expoente: ");
	scanf("%d", &e);

	procedimentoporvalor(b, e);
	
	
	procedimentoporreferencia(b, e, res);
	printf("\n\n%d", res);






}
