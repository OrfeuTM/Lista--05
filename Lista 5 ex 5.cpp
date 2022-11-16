#include <stdio.h>
#include <conio.h>

/*

Elaborar um programa que apresente como resultado um número positivo, 
mesmo que a entrada tenha sido feita com um valor negativo. 
Use um procedimento com passagem de valor por referência.

*/

void funcao(int *num1) {
	
	if(*num1 < 0) {
	*num1 = *num1*-1;
	}
	
	return;
}

int main(){
	
	int num1;
	
	printf("Informe um numero:\n");
	scanf(" %d", &num1);
	
	funcao(&num1);
	
	printf("O numero digitado foi: %d", num1);

	getch();
	
	return 0;

}