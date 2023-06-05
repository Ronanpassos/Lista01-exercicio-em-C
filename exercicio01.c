#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
//para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
//“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
//estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela./

int main(){
	
	setlocale(LC_ALL,"portuguese");
	int a, b, c;
	printf("Digite os Valos de : a e b: ");
	scanf(" %d %d", &a, &b);
			
	printf("Os valores de: a: %d\tb: %d\n", a,b);
	
	c = a;
	a = b;
	b = c;
	
	printf("Os valores de a: %d \tb: %d\n", a,b);
	
	
	return 0;
}

