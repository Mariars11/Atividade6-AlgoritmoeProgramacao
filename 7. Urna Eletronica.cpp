#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	int num = 0, pele = 0, maradona = 0, branco = 0, nulo = 0, numPessoas = 0;
	char aux;
	setlocale(LC_ALL, "Portuguese");
	
	printf("---> URNA ELETR�NICA!\n");
	printf("Quantas pessoas ir�o votar? ");
	scanf("%d", &numPessoas);
	fflush(stdin);
	printf("\n--->INFORME OS SEGUINTES NUMEROS PARA:\n\n->|25| VOTAR EM PELE\n->|33| VOTAR EM MARADONA\n->|0| VOTAR BRANCO\n->|QUALQUER OUTRO NUMERO| VOTAR NULO\n");
	for(int i = 1; i <= numPessoas; i++){
		printf("\nEm quem voc� qu� votar? ");
		scanf("%d", &num);
		fflush(stdin);
		printf("Para confirmar o voto informe |S|: ");
		scanf("%c", &aux);
		fflush(stdin);
		aux = toupper(aux);
		if(num == 25 && aux == 'S')
			pele++;
			else if(num == 33 && aux == 'S')
				maradona++;
				else if(num == 0 && aux == 'S')
					branco++;
					else if(num != 25 && num != 33 && num!= 0 && aux == 'S')	
						nulo++;
						else printf("VOTO N�O COMPUTADO!\n");
	}
	printf("=========================\n");
	printf("--> RELAT�RIO DOS VOTOS!\n");
	printf("=========================\n");
	printf("  VOTOS EM PEL�: %d\n", pele);
	printf("  VOTOS EM MARADONA: %d\n", maradona);
	printf("  VOTOS EM BRANCO: %d\n", branco);
	printf("  VOTOS NULOS: %d\n", nulo);
	printf("=========================\n");
	if(pele > maradona)
		printf(" [O CAMPE�O FOI O PEL�!]\n");
		else if(maradona > pele)
			printf(" [O CAMPE�O FOI O MARADONA!]\n");
				else printf(" [HOUVE UM EMPATE!]\n");
				printf("=========================\n");
	
	return 0;
}
