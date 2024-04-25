#include <stdio.h>

int main()
{
	int a = 1;
	int b = 1;
	int c, i, n;
	
	printf("\t<Sequencia de Fibonacci>\n\n");
	printf("Digite a quantidade de termos da sua sequencia:\n> ");
	scanf("%d", &n);
	printf("\n%d %d ", a, b);

	if (n > 2)
	{
		for(i = 2; i < n; i++)
		{
			c = a + b;
			printf("%d ", c);
			a = b;
			b = c;
		}

		printf("\n\n");
	}

	else
	{
		printf("\nQuantidade de termos invalida.\n");
	}

	return 0;
}
