#include<stdio.h>
#include<stdlib.h>
/* Crie um programa em C que permita fazer a convers�o cambial entre Reais e D�lares. Considere 
como taxa de c�mbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em 
D�lares.*/

int main(){
	
	float valoReal,valorDollar;
	
	printf("Digite o valor a ser convertido :\n");
	scanf(" %.2f", &valoReal);
	
	valorDollar = valoReal / 5.3;
	
	printf("Valor em dollar : %.2f \n",valorDollar);
	
	
	
	return 0;
}
