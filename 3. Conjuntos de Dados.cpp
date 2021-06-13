#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, altura[10], maiorAltura = 0, menorAltura = 0, numMasc = 0, numFem = 0;
	float somaAlturaMulheres, mediaAlturaMulheres;
	char sexo[10];
	
	somaAlturaMulheres = 0;
	mediaAlturaMulheres = 0;
	
	for(i = 1; i <= 10; i++){
		printf("Qual a altura da pessoa %d (em cm): ", i);
		scanf("%d", &altura[i]);
		fflush(stdin);
		
		if(i == 1)
			menorAltura = altura[i];
			
		if(menorAltura > altura[i])
			menorAltura = altura[i];

		if(maiorAltura < altura[i])
			maiorAltura = altura[i];
			
		printf("Qual o sexo da pessoa %d |F- feminino| ou |M- masculino|: ", i);
		scanf("%c", &sexo[i]);
		fflush(stdin);
		sexo[i] = toupper(sexo[i]);

			
		if(sexo[i] == 'F'){
			numFem++;
			somaAlturaMulheres = somaAlturaMulheres + altura[i];
		}
			else if(sexo[i] == 'M')
				numMasc++;
									
	}
	
	mediaAlturaMulheres = somaAlturaMulheres / numFem;
	
	printf("==================\n");
	printf("  DADOS COLETADOS");
	printf("\n");
	printf("====================\n");
	printf("A MENOR ALTURA: %d\n", menorAltura);
	printf("A MAIOR ALTURA: %d\n", maiorAltura);
	printf("====================\n");	
	printf("MÉDIA DE ALTURAS DAS MULHERES: %.2f\n", mediaAlturaMulheres);
	printf("O NÚMERO DE HOMENS: %d\n", numMasc);
	return 0;
}
