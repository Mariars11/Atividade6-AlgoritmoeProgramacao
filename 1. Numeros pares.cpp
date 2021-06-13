#include <stdio.h>

int main(){
	int num, par, i;
	
	printf("Informe um valor qualquer: ");
	scanf("%d", &num);
	
	for(i = num; i <= 2000; i++){
		if((i % 2) == 0){
			printf("%d\n", i);
		}		
	}
	
	if (num >= 2001){
		printf("%d: Valor excedido!", num);
	}
	
	return 0;
}
