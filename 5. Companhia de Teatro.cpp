#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int lucro, valorIngresso = 15, numIngresso = 120, despesas = 600;
	
	printf("=============================================================\n");
	printf("|PRE�O DO INGRESSO |   LUCRO  | N�MERO DE INGRESSOS VENDIDOS|");
	printf("\n=============================================================\n");
	
	for(valorIngresso; valorIngresso > 0; valorIngresso = valorIngresso - 3){
		lucro = (valorIngresso * numIngresso) - despesas;
		printf("|	%i	        %i  		%i		    |\n", valorIngresso, lucro, numIngresso);
		numIngresso = numIngresso + 26;
		
	}
		printf("=============================================================\n");
	return 0;
}
