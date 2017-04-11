#include <stdio.h>
int main(){
	
	char lista[10], n, x;
	int i = 0;
	
	for (i; i < 10; i++)	lista[i] = 0;
	
	i = 0;
	printf("Insira 10 valores para montar a sequencia: ");
	while(i < 10){
		scanf("%c", &n);
		if(n >= '0' && n <= '9'){
			lista[i] = n;
			i += 1;
		}
	}
	
	printf("\nInsira o valor a ser procurado na sequencia: ");
	fflush(stdin);
	scanf("%c", &x);
	
	for(i = 0; i < 10; i++){
		if(lista[i] == x){
			printf("\nO %c foi encontrado na posicao %d\n", x, i);
			break;
		}
		if(i == 9)	printf("\nO %c nao foi encontrado\n", x);
	}
	
	return 0;
}
