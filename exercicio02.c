#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa em C para trocar o valor de duas vari�veis inteiras sem utilizar nenhuma 
//vari�vel auxiliar


int main(){
	
	int a , b;
	
	printf("Digite dois valores ");
	scanf("%d%d", &a, &b);
	
	printf("a: %d\tb: %d\n",a,b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("a: %d\tb: %d\n",a,b);
	
	return 0;
}
