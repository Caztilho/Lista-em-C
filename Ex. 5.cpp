#include<stdio.h>
#include<locale.h>

int n;

void procedimentoporvalor(int num1){
	
	if(num1 % 2 == 0){
		printf("N�mero par!");
	}else{
		printf("N�mero impar!");
	}
}

void procedimentoporreferencia(int &num1){
	
	num1 = num1 % 2;
	
	
	
}




main(){
	setlocale(LC_ALL,"Portuguese");

	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	procedimentoporvalor(n);

	procedimentoporreferencia(n);
		if(n % 2 == 0){
			printf("\n\nN�mero par!");
		}else{
			printf("\n\nN�mero impar!");
		}

}	
