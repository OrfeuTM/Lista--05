#include <stdio.h>
#include <stdlib.h>

float n1, n2, resultado; 
char op;

void soma(float n1 , float n2){
	resultado = n1 + n2;
	printf("o resultado da adicao eh  %.2f\n", resultado);
}

void sub(float n1 , float n2){
	resultado = n1 - n2;
	printf("o resultado da subtracao eh  %.2f\n", resultado);
}

void mul(float n1 , float n2){
	resultado = n1 * n2;
	printf("o resultado da multiplicacao eh  %.2f\n", resultado);
}

void div(float n1 , float n2){
	resultado = n1 / n2;
	printf("o resultado da divisao eh   %.2f\n", resultado);
}



int main (){
	
	
	printf("Digite um numero \n");
	scanf("%f", &n1);
	
	printf("Escolha outro numero: \n");
	scanf("%f", &n2);
	
	printf("Escolha sua operacao ( + - * / ) \n");
	scanf ("%s", &op);
	
	switch (op) 
	{
		case '+':
		soma ( n1, n2);
		break;
		
		case '-':
		sub ( n1, n2);
		break;
	
		case '*':
		mul ( n1, n2);
		break;
	
		case '/':
		div ( n1, n2);
		break;	
		
	}
	


system ("pause");
return 0;	
}


