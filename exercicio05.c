/*Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o 
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, 
sabendo que são descontados 8% para imposto de renda.*/

#include<stdio.h>
#include<stdlib.h>


int main(){
	
	float dias, valorfinal, desconto;
	
	printf("Quantos dias trabalhados ?\n");
	scanf("%f",&dias);
	
	valorfinal = dias * 45;
	desconto = valorfinal * 0.08;
	valorfinal = valorfinal - desconto;
	
	printf("valor a receber : %.2f\n valor do desconto :%.2f\n",valorfinal,desconto);
	
	return 0;
}
