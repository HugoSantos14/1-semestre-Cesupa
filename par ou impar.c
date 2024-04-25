#include <stdio.h>

int main(){
	
	int i, n;
	printf("Digite a quantidade de termos da sua sequencia: ");
	scanf("%d", &n);
	int v[n];
	printf("\n");
	for(i = 0; i < n; i++){
		printf("Digite o %do termo:\n> ", i + 1);
		scanf("%d", &v[i]);
	}
	
	for(i = 0; i < n; i++){
		if(v[i] % 2 == 0){
			printf("\n%d - Par", v[i]);
		}
		
		else{
			printf("\n%d - Impar", v[i]);
		}
	}
	
	return 0;
}
