#include <stdio.h>
int main(){
	
	char num, lista[50];
	int i = 0;
	
	for(i; num != 10; i++){
		num = getchar();
		//if (num >= '0' && num <= '9') Tentei por essa condição pra q so pegue numeros, porém não funcionou muito bem -_-
		lista[i] = num;
	}
	
	for (i; i>=0; i--){
		printf("%c", lista[i]);
	}
	
	return 0;
}
