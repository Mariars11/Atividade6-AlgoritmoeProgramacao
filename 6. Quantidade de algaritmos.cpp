#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contagem = 0;
	char numero[1000];
	
	printf("Informe um n�mero: ");
	fgets(numero, 1000, stdin);
	
	contagem = strlen(numero) - 1;

	
	printf("Esse n�mero possui %d algaritmos!", contagem);
	
}
