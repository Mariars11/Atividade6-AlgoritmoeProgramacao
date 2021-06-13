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
	
	printf("Informe a quantidade de crianças que nasceram nesse período: ");
	scanf("%f", &num_criancas_nascidas);
	fflush(stdin);
	
	printf("\n---> SERÃO SOLICITADAS INFORMAÇÕES DAS CRIANÇAS QUE VIERAM A ÓBITO!\n");
	printf("---> CASO TODAS AS INFORMAÇÕES TENHAM SIDO INFORMADAS, INDIQUE |V| NO LUGAR DO SEXO!\n");
	printf("\n");
		while(true){
			printf("Informe o sexo da criança: ");
			scanf("%c", &sexo);
			fflush(stdin);
			sexo = toupper(sexo);
			
			if(sexo == 'V'){
				printf("OBRIGADO PELAS INFORMAÇÕES!\n");
				break;
			}
						
			printf("Número de meses que a criança viveu: ");
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
	printf("  A PORCENTAGEM DE CRIANÇAS MORTAS NO PERÍODO É: %.2f\n", porc_criancas);
	printf("  A PORCENTAGEM DE CRIANÇAS MASCULINAS MORTAS NO PERÍODO: %.2f\n", porc_masc);
	printf("  A PORCENTAGEM DE CRIANÇAS QUE VIVERAM 24 MESES OU MENOS É: %.2f\n", porc_viveram_tempo);
	printf("==================================================================\n");
		
	return 0;
}
