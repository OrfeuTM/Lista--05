#include <stdio.h>
#include <math.h>

/*

 Crie um programa que calcule XY (X elevado a Y), 
 sendo que os valores de X e Y devem ser números do 
 tipo double, positivos, informados pelo usuário. 
 O resultado deve ser exibido na tela.

*/
	int x, y, res;

int main (){
	
	printf("digite um numero x: \n");
	scanf ("%d", &x);
	
	printf("digite um numero y para elevar x \n");
	scanf("%d", &y);
	
	res = pow(x, y);
	
	printf("O resultado de %d elevado a %d eh: %d \n", x, y, res);
	
	system ("pause");
	
	return 0;
}