#include <stdio.h>
#include <math.h>

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