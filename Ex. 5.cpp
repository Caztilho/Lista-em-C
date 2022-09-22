#include<stdio.h>
#include<locale.h>

int n;

void procedimentoporvalor(int num1){
	
	if(num1 % 2 == 0){
		printf("Número par!");
	}else{
		printf("Número impar!");
	}
}

void procedimentoporreferencia(int &num1){
	
	num1 = num1 % 2;
	
	
	
}




main(){
	setlocale(LC_ALL,"Portuguese");

	printf("Digite um número: ");
	scanf("%d", &n);
	
	procedimentoporvalor(n);

	procedimentoporreferencia(n);
		if(n % 2 == 0){
			printf("\n\nNúmero par!");
		}else{
			printf("\n\nNúmero impar!");
		}

}	
