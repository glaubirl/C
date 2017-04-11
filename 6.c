/*
Declare uma matriz 5x5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida
*/

#include <stdio.h>
int main(){
	
	int matriz[5][5], i, c;
	
	//Zerando as posições do vetor matriz
	for (i = 0; i < 5; i++){
		c = 0;
		for (c = 0; c < 5; c++){
			matriz[i][c] = 0;
		}
	}

	//Colocando valor 1 na diagonal principal
	i = 0;
	for (i; i < 5; i++){
		matriz[i][c] = 1;
		c += 1;
	}
	
	//Imprimindo a tabela na tela
	printf("%d", matriz[1][1]);
	
	return 0;
}
