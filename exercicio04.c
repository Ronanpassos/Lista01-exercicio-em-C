/* Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em 
porcentagem) e o n�mero de pessoas para dividir a conta. Imprima o valor que cada um deve pagar. 
Assuma que a conta ser� dividida igualmente.
*/
#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int numPessoas;
	float valorDespesa,gorjeta,valorTotal,valorPorPessoa;
	
	printf("Digite o valor da conta, da gorjeta e a quantidade total de pessoas");
	scanf("%f %f %d",&valorDespesa,&gorjeta,&numPessoas); 
	valorTotal = valorDespesa * gorjeta/100 + valorDespesa;
	valorPorPessoa = valorTotal/numPessoas;
	printf("cada um ira pagar : %f.2",valorPorPessoa);
	return 0;
}
