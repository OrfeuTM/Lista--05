#include <stdio.h>
#include <stdlib.h>


/*
 Um estabelecimento fará uma promoção com descontos nos produtos A e B. 
 Se forem comprados apenas os produtos A ou apenas os produtos B, o desconto será de 10%.
Caso sejam comprados os produtos A e B, o desconto será de 15%. O custo de cada produto é,
respectivamente, para os produtos A e B, R$10 e R$20. Elaborar um programa que, por meio de funções
(com ou sem retorno), calcule e apresente o valor da despesa do freguês na compra dos produtos. 
Lembre-se de que o freguês pode levar mais de uma unidade de um determinado produto.
*/
int op1, op2, qtdCafe, qtdTorta;
float valorCafe = 10.00, valorTorta = 20.00, valorTotalCafe, valorTotalTorta, valorFinal, valorTotalPedido, valorDesc1, valorDesc2;
	
	


void cafe(){
	printf("Quantos cafes, vai querer?\n(se nenhum digite 0)\n");
	scanf("%d", &qtdCafe);
	
	
	return;
}

void torta(){
	printf("Quantas tortas vc vai querer?\n(se nenhum digite 0\n");
	scanf("%d", &qtdTorta);
	
	return;
}

int main (){
	


	printf("Estamos com descontos!!! \nSe vc comprar cafe ou apenas a torta, o desconto sera de 10%%.\nCaso sejam comprados os cafes e tortas, o desconto sera de 15%%. \nPodemos continuar o atendimento?\nDigite \n1 para sim \n2 para nao \n");
	scanf("%d", &op1);
	
	if (op1==1){
	cafe();
	torta();
	
	printf("Cada cafe custa 10 reais e cada torta 20 reais \nComo vc pediu %d de cafe(s) e %d de tortas \n", qtdCafe, qtdTorta);
	
	valorTotalCafe = valorCafe * qtdCafe;
	valorTotalTorta = valorTorta * qtdTorta;
	valorTotalPedido = valorTotalCafe + valorTotalTorta;
	
	
		printf("O valor total do seu cafe ficara de %.2f reais \nO valor total de suas tortas %.2f reais \nTotalizando o valor de %.2f reais\n" ,valorTotalCafe ,valorTotalTorta, valorTotalPedido);
		
		if(qtdCafe >=1 && qtdTorta>=1){
			
			valorDesc2 = valorTotalPedido * 0.85;
			printf("Como vc aporveitou nossa promocao de dois produtos \nSeu valor hoje ficara por %.2f \nObrigado, volte sempre!\n", valorDesc2);
			
		}else{
			
			valorDesc1 = valorTotalPedido * 0.90;
			printf("Como vc aporveitou nossa promocao de um prdutos seu valor hoje ficara por %.2f Obrigado, volte sempre!\n", valorDesc1);
			
		}

	}else {
	printf("Tudo bem \naguardamos uma nova oportunidade!");
	}
	
	
	system("pause");
	return 0;
}