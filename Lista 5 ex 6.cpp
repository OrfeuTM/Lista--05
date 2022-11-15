#include <stdio.h>
#include <conio.h>

void meses(int mes) {
	
	int cont;
	
	char meses[13][11] = {{},
		{"Janeiro"},
		{"Fevereiro"},
		{"Marco"},
		{"Abril"},
		{"Maio"},
		{"Junho"},
		{"Julho"},
		{"Agosto"},
		{"Setembro"},
		{"Outubro"},
		{"Novembro"},
		{"Dezembro"},};
	
	
	for(cont = 1; cont <= mes; cont++) {
		
		if(mes == cont) {
			
			printf(" O mes digitado foi: %s\n", meses[cont]);
		}	
	}

}

int main() {
	
	int mes;
	
	while(mes == 0) {
		
		printf("Informe um numero de 1 a 12: \n ");
		scanf(" %d", &mes);
	
		if(mes >= 1 && mes <= 12) {
			meses(mes);
		}else{
			printf("--> Mes invalido!\n");
			mes = 0;
		}		
	}
	
	getch();
	
	return 0;
	
}