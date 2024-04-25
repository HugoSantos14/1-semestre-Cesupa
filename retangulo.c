#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int altura, comprimento, i, topo, n, base;
	printf("Altura do retangulo = ");
	scanf("%d", &altura);
	printf("Comprimento do retangulo = ");
	scanf("%d", &comprimento);
	
	if (altura >= 3 && comprimento >= 3){
		
		printf("\nResultado:\n\n");
 		
 		for(topo = 1; topo <= comprimento; topo++){
 			printf("#");
		 	}
		
		for(i = 3; i <= altura; i++){
			
			printf("\n#");
			
			for(n = 3; n <= comprimento; n++){
				printf("-");
			}
			
			printf("#");
			
			if(i == altura){
				
			printf("\n");
				
			for(base = 1; base <= comprimento; base++){
			printf("#");
			}
				
			break;
			}
		}
	}
	
	else{
		printf("\nMedidas invalidas.\n");
	}
	
	system("pause");
}