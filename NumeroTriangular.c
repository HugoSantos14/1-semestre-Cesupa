#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, an;
	int a1 = 1;
	int raiz = 1;
	int var_raiz = 2;
	printf("Para saber se um numero eh triangular ou nao, divide-se esse numero por 6.\n");
	printf("Se o resultado dessa divisao se for um dos termos de uma Progressao Aritmetica de segunda ordem\n");
	printf("onde o primeiro termo eh 1, o segundo termo eh 4, e a variacao da raiz da P.A eh igual a +1, ou seja:\n");
	printf("\n\t1x2x3 = 6\n");
	printf("\t2x3x4 = 24\n");
	printf("\t3x4x5 = 60\n");
	printf("\t4x5x6 = 120\n");
	printf("\t5x6x7 = 210\n");
	printf("\t6x7x8 = 336\n");
	printf("\n\t6 / 6 = 1\n");
	printf("\t24 / 6 = 4\n");
	printf("\t60 / 6 = 10\n");
	printf("\t120 / 6 = 20\n");
	printf("\t210 / 6 = 35\n");
	printf("\t336 / 6 = 56\n");
	printf("\t...\n\n");
	printf("\nEstando ciente disso, digite um numero:\n> ");
	scanf("%d", &n);
	an = n/6;
	printf("\n");

	if (n >= 1)
	{
		for(a1 = 1; a1 < an; var_raiz++){
			
			a1 = a1 + raiz + var_raiz;
			raiz += var_raiz;
			
			if(a1 >= an){
				break;
			}
		}

		a1 = a1 * 6;

		if (a1 == n)
		{
			printf("\nO numero %d eh um numero triangular.\n", n);
		}
		
		else
		{
			printf("\nO numero %d nao eh um numero triangular.\n", n);
		}
	}
	
	else
	{
		printf("\nNumero invalido.\n");
	}

	system("pause");
	return 0;
}
