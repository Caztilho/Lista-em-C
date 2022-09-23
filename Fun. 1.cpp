#include<stdio.h>
#include<locale.h>

int n, res;

int somatorio(int y){
	int x;
	float s;
	
	for(x=1;x<=y;x++){
		s = s + x;
	}
	
	return s;
}

main(){
	setlocale(LC_ALL,"Portuguese");

	printf("Digite um número: ");
	scanf("%d",&n);
	
	res = somatorio(n);
	printf("O somatório é igual a: %d", res);

}
