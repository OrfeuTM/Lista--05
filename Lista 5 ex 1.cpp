#include <stdio.h>
#include <stdlib.h>

/* 
 Elabore um programa que leia duas notas de um aluno, 
 calcule e apresente a sua média na tela. 
 O programa deve possuir uma função que leia e retorne uma nota de 0 a 10. 
 O programa também deve possuir um procedimento que receba a média e apresente 
 na tela a situação do aluno (“aprovado”, “em recuperação” ou “reprovado”). 
 Defina a faixa de valores para cada uma dessas situações.

*/
int main () {
	
	float nota1, nota2, soma, media;
	
	printf ("Digite a primeira nota: \n(de 00.00 ateh 10.00)\n");	
	scanf ("%f", &nota1);
	
	if(nota1 <0){
		printf ("valor nao aceito \n");
		
	}else if (nota1>10){
		printf ("valor nao aceito \n");
	}else {
		printf("nota armazenada \n");
		
			printf ("Digite a segunda nota: \n (de 00.00 ateh 10.00) \n");	
	scanf ("%f", &nota2);
		if (nota2 <0){
			printf ("valor nao aceito \n");
		}else if (nota2 >10){
			printf ("valor nao aceito \n");
		}else {
			printf("nota armazenada \n");
			soma =  nota1 + nota2;
			media = soma / 2;
			
			printf ("sua media eh de %f  \n", media);
			if (media >5){
				printf("parabens, vc esta aprovado! \n");
			}else if (media >3){
				printf("voce precisa estudar, esta de recuperacao! \n");
			}else{
				printf("infelizmente vc esta reprovado \n");
			}
			
		}
	}
	
	system("pause");
	return 0;
}