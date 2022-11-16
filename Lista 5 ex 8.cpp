#include <stdio.h>

/*
Escreva um programa que simule a compra de um lanche em uma padaria. 
O programa deve ser executado enquanto o cliente informar o que deseja comprar e a quantidade desejada. 
A cada novo item inserido na compra, o programa deve mostrar na tela o subtotal a ser pago. 
Ao final da execução apresente o valor total da compra.

*/

	char i, j;
	int cont, op1, op2, qtdPao, qtdmanteiga, qtdfarinha, qtdDeQueijo, qtdpaoDeAlho, qtdPeDeMoleque, qtdPacoca, qtdCocada, qtdQueijo;
	float  pao = 1.00, manteiga = 15.00, farinha = 7.00, paoDeQueijo = 2.00, paoDeAlho = 10.00, peDeMoleque = 1.00, pacoca = 0.50, cocada = 2.00, queijo = 25.00, valorTotal;

int menu(){
	
	while ( op2 != 0){
	
	 switch ( op2 ){
    case 1 :
    printf ("Pao adicionado\n");
    valorTotal + pao;
    break;
    
    case 2 :
    printf ("Manteiga adicionado\n");
    valorTotal + manteiga;
	menu();
    break;
    
    case 3 :
    printf ("Farinha adicionado\n");
    valorTotal + farinha;
    menu();
    break;
    
    case 4 :
    printf ("Pao de queijo adicionado\n");
    valorTotal + queijo;
    menu();
    break;
    
    case 5 :
    printf ("Pao de alho adicionado\n");
    valorTotal + paoDeAlho;
    menu();
    break;
    
    case 6 :
    printf ("Pe de moleque adicionado\n");
    valorTotal + peDeMoleque;
    menu();
    break;
    
    case 7 :
    printf ("Pacoca adicionado\n");
    valorTotal + pacoca;
    menu();
    break;
    
    case 8 :
    printf ("Cocada adicionado\n");
    valorTotal + cocada;
    menu();
    break;
    
    case 9 :
    printf ("Queijo adicionado\n");
    valorTotal + queijo;
    menu();
    break;
	}
}
	printf("O valor total do seu pedido eh de %f", valorTotal);
    
return 0;
  }


int main (){
	
 
	
	char cardapio[11][20] = {{},

	{"1-Pao"},
	{"2-Manteiga"},
	{"3-Farinha"},
	{"4-Pao de queijo"},
	{"5-Pao de alho"},
	{"6-Pe de moleque"},
	{"7-Pacoca"},
	{"8-Cocada"},
	{"9-Queijo"},
	{"0-sair"}
};
	
	printf("Ola gostaria de ver nosso cardapio?\nDigite 1-Para sim\nDigite 2-Para nao\n");
	scanf("%d",&op1);
	if(op1 == 1){
		for (char i = 0; i<11; ++i) {
			for (char j = 0; j < 20; ++j){
				printf ("%c", cardapio[i][j]);
			}
			printf("\n");
		}
		printf("Qual item vc quer adicionar?\n(Digite o numero da opcao desejada)");
		scanf("%d", &op2);
		
		menu();

		}else {
		printf("Talvez outro dia entao!");
	}
	
	
	return 0;
}