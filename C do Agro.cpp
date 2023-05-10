#include <stdio.h>
#include <stdlib.h>
//Programa em C que calcula Numeros de Arrobas de gado, para compra em venda de animais //
int main(){
int PB, AR, real;

 printf("\t\t\t\t\t\tBem-Vindo\n");
 printf("\t\tInforme o peso Bruto do Animal:\t");
 scanf("%d",&PB);
 
 system("cls");
 
 AR = PB / 32,14;
 
 real = AR * 250;
 
 printf("\t Contem %d Arrobas",AR);
 
 printf("\n\tO valor  das Arrobas e de %d R$Reais",real);
	return 0;
}

