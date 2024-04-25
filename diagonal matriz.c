#include <stdio.h>

int main(){
	
	int a, i, j;
	printf("Digite a quantidade de linhas e colunas: ");
	scanf("%d", &a);
	int m[a][a];
	printf("\n\t- Voce escolheu uma matriz %dx%d -\n\n", a, a);
	for(i = 0; i < a; i++){
		for(j = 0; j < a; j++){
			printf("Digite o termo %dx%d da matriz:\n> ", i + 1, j + 1);
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\nDiagonal principal:\n\n");
	for(i = 0; i < a; i++){
		printf("%d\n", m[i][i]);
	}
	
	return 0;
}
