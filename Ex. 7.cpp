#include<stdio.h>
#include<locale.h>

int v1, v2, v3, s;

void procedimentoporvalor(int x, int y, int z){
	int s;
	
	s = x + y + z;
	s = s * s;

	printf("%d", s);
}

void procedimentoporreferencia(int x, int y, int z, int &s){
	int a, b, c;
	
	s = x + y + z;
	s = s * s;
	
}

main(){
	setlocale(LC_ALL,"Portuguese");

	printf("Digite o primeiro valor: ");
	scanf("%d", &v1);
	printf("Digite o segundo valor: ");
	scanf("%d", &v2);
	printf("Digite o terceiro valor: ");
	scanf("%d", &v3);
	
	procedimentoporvalor(v1, v2, v3);
	procedimentoporreferencia(v1, v2, v3, s);
	printf("\n\n%d", s);





}
