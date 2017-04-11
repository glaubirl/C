#include <stdio.h>
int main(){

	int lista[8], i = 0;
	char n;
	
	for (i; i < 8; i++)		lista[i] = 0;
	
	printf("Insira 8 digitos numerais: ");
	
	i = 0;
	//Montando a lista com valores char de '0' à '9'
	while (i < 8){
		scanf("%c", &n);
		if (n >= '0' && n <= '9'){
			lista[i] = n;
			i += 1;
		}
	}

	for (i = 4; i <= 7; i++){
		printf("%c", lista[i]);
	}

	for (i = 0; i <= 3; i++){
		printf("%c", lista[i]);
	}

	return 0;
}
