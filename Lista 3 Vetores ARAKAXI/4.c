#include <stdio.h>

int main(){
	
	char listaA[5], listaB[8], n, iguais[10];
	int i = 0, c = 0, x = 0, quant = 0;

	for (i; i<8; i++){
		listaA[i] = 0;
		listaB[i] = 0;
	}
	
	i = 0;
	printf("Insira cinco valores para a lista A: ");
	while(i < 5){
		scanf("%c", &n);
		if (n >= '0' && n <= '9'){	
			listaA[i] = n;
			i += 1;
		}
	}
	
	i = 0;
	printf("\nInsira oito valores para a lista B: ");
	while(i < 8){
		scanf("%c", &n);
		if (n >= '0' && n <= '9'){
			listaB[i] = n;
			i += 1;
		}
	}
	
	i = 0;
	for (i; i < 5; i++){
		c = 0;
		for (c; c < 8; c++){
			if(listaA[i] == listaB[c]){
				listaB[c] = 'a';
				printf("%c", listaA[i]);
				break;
			}
		}
	}
	
	return 0;
}
