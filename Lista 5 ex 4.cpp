# include <stdio.h>
/* Elaborar uma função (com ou sem retorno) que apresente a mensagem 
 "Este valor é divisível por 2 ou 3".
  Deve ser solicitado pelo programa principal o valor a ser verificado.
  
   Caso o valor não atenda à condição desejada, a função deve apresentar a mensagem "Valor inválido". */

int valor;

float div(int valor){

	if(valor % 2 == 0) {
		printf("O numero %d e divisivel por 2", valor);
	}else if(valor % 3 == 0) {
		printf("O numero %d e divisivel por 3", valor);
	}else{
		printf("Valor invalido!");
	}
}

int main (){
	
	printf("digite um numero \n");
	scanf("%d", &valor);
	
	div(valor);
	
	

	
//	system("pause");
	
	return 0;
}