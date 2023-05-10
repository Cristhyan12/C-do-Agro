#include <stdio.h>
#include <stdlib.h>
//Programa em C que calcula Numeros de Arrobas de gado, para compra em venda de animais //
// Autor: Júlio Cristhyan de Oliveira Toledo
// Compilador: DevC++
//  Data:10/05/2023
int main(){
int PB, AR, f, real;

 printf("\t\t\t\t\t\tBem-Vindo\n");
 printf("\t\tInforme o peso Bruto do Novilhos:\t");
 scanf("%d",&PB);
 
 system("cls");
 
 AR = PB / 32,14;
 
 real = AR * 300;
 
 printf("\t Contem %d Arrobas",AR);
 
 printf("\n\tO valor  das Arrobas e de %d R$Reais",real);
 printf("\n\n\t\tInforme o peso Bruto da Femea:  ");
 scanf("%d",&f);
 system("cls");
 
 AR = PB / 32,14;
 f = AR * 250;
 
 printf("\t Contem %d Arrobas",AR);
 printf("\n\tO valor  das Arrobas das Novilhas e %d R$Reais",f);
 printf("\n\n\n\n\t\t\t\tEspero Ter Ajudado :)");
	return 0;
}

