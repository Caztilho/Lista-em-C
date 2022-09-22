#include <stdio.h>
#include <locale.h>

char nome[100];
int sexo;

void lernomesexo(char n[100], int s){
	if(s == 1){
		printf("Ilmo. Sr. %s", n);
	} else {
		printf("Ilmo. Sra. %s", n);
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite seu nome: \n");
	scanf("%s", &nome);
	printf("Digite seu sexo: MASCULINO [1] // FEMININO [2]\n");
	scanf("%d", &sexo);
	
	lernomesexo(nome, sexo);
	
}
