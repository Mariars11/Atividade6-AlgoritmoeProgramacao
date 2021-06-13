#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num_criancas_nascidas = 0, meses_vida = 0, num_mortas = 0, num_masc = 0, num_viveram_tempo = 0;
	float porc_criancas, porc_masc, porc_viveram_tempo;
	char sexo;
	
	porc_criancas = 0;
	porc_masc = 0;
	porc_viveram_tempo = 0;
	
	printf("Informe a quantidade de crian�as que nasceram nesse per�odo: ");
	scanf("%f", &num_criancas_nascidas);
	fflush(stdin);
	
	printf("\n---> SER�O SOLICITADAS INFORMA��ES DAS CRIAN�AS QUE VIERAM A �BITO!\n");
	printf("---> CASO TODAS AS INFORMA��ES TENHAM SIDO INFORMADAS, INDIQUE |V| NO LUGAR DO SEXO!\n");
	printf("\n");
		while(true){
			printf("Informe o sexo da crian�a: ");
			scanf("%c", &sexo);
			fflush(stdin);
			sexo = toupper(sexo);
			
			if(sexo == 'V'){
				printf("OBRIGADO PELAS INFORMA��ES!\n");
				break;
			}
						
			printf("N�mero de meses que a crian�a viveu: ");
			scanf("%f", &meses_vida);
			fflush(stdin);
			
			if(sexo== 'M')
				num_masc++;
			if(meses_vida<= 24)
				num_viveram_tempo++;	
			
			num_mortas++;
	 	}
	
	porc_criancas = (num_mortas / num_criancas_nascidas) * 100;
	porc_masc = (num_masc / num_mortas) * 100;
	porc_viveram_tempo = (num_viveram_tempo / num_mortas) * 100; 
	
	printf("==================================================================\n");
	printf("  A PORCENTAGEM DE CRIAN�AS MORTAS NO PER�ODO �: %.2f\n", porc_criancas);
	printf("  A PORCENTAGEM DE CRIAN�AS MASCULINAS MORTAS NO PER�ODO: %.2f\n", porc_masc);
	printf("  A PORCENTAGEM DE CRIAN�AS QUE VIVERAM 24 MESES OU MENOS �: %.2f\n", porc_viveram_tempo);
	printf("==================================================================\n");
		
	return 0;
}
