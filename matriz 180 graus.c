#include <stdio.h>

int main(){
	
	int a, b, i, j;
	printf("Digite a quantidade de linhas: ");
	scanf("%d", &a);
	printf("Digite a quantidade de colunas: ");
	scanf("%d", &b);
	int m[a][b];
	printf("\n\t- Voce escolheu uma matriz %dx%d -\n\n", a, b);
	for(i = 0; i < a; i++){
		for(j = 0; j < b; j++){
			printf("Digite o termo %dx%d da matriz:\n> ", i + 1, j + 1);
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\nSua matriz:\n\n");
	for(i = 0; i < a; i++){
		for(j = 0; j < b; j++){
			printf("%d ", m[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\nA matriz gira 180 graus.\n\n");
	for(i = a - 1; i >= 0; i--){
		for(j = b - 1; j >= 0; j--){
			printf("%d ", m[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
