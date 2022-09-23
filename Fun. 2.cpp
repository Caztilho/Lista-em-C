#include <stdio.h>
#include <locale.h>

int n;

int fib(int n){                                          
	int i, fib1 = 1, fib2 = 1, soma;         
	
	for (i = 1; i <= n; i = i + 1){                                        
		soma = fib1 + fib2;                    
		fib1 = fib2;                           
		fib2 = soma;                           
	}                                        
	return fib2;                             
}                                          

main(){
	setlocale(LC_ALL, "Portuguese");
	
	scanf("%d", &n);
	printf("%d\n", fib(n));
	
}
