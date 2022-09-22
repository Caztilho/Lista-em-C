#include <stdio.h>
#include <locale.h>

	int n;
	float fatr;
	
void fatorialvalor(int x){
	int y;
	float fat;
	fat = 1;
	for(y=1;y<=x;y++){
		fat = fat * y;
	}
	printf("O fatorial é: %f\n", fat);
}

void fatorialreferencia(float &fat, int x){
	int y;
	for(y=1;y<=x;y++){
		fat = fat * y;
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número para descobrir seu fatorial: \n");
	scanf("%d", &n);
	
	fatorialvalor(n);
	
	fatr = 1;
	fatorialreferencia(fatr, n);
	printf("O fatorial é: %f", fatr);
	
}
