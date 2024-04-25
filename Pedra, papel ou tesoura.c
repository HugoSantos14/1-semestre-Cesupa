#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2;
    printf("\n-------------------------------------------------------------------------");
    printf("\n1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("-------------------------------------------------------------------------\n");
    printf("\nJogador 1, escolha um numero: ");
    scanf("%d", &num1);
    printf("Jogador 2, escolha um numero: ");
    scanf("%d", &num2);

    if (num1 != num2)
    {
        if (num1 == 1 && num2 == 3)
        {
            printf("\nA pedra quebra a tesoura. O vencedor eh o Jogador 1.\n");
        }

        if (num1 == 2 && num2 == 1)
        {
            printf("\nO papel cobre a pedra. O vencedor eh o Jogador 1.\n");
        }
        
        if (num1 == 3 && num2 == 2)
        {
            printf("\nA tesoura corta o papel. O vencedor eh o Jogador 1.\n");
        }
        
        if (num1 == 1 && num2 == 2)
        {
            printf("\nO papel cobre a pedra. O vencedor eh o Jogador 2.\n");
        }

        if (num1 == 2 && num2 == 3)
        {
            printf("\nA tesoura corta o papel. O vencedor eh o Jogador 2.\n");
        }
        
        if (num1 == 3 && num2 == 1)
        {
            printf("\nA pedra quebra a tesoura. O vencedor eh o Jogador 2.\n");
        }
        
    }
    
    else
    {
        if ((num1 > 0 && num1 < 4) && (num2 > 0 || num2 < 4))
        {
            printf("\nEmpate.\n");
        }
    }

    if ((num1 > 3 || num1 < 1) && (num2 > 3 || num2 < 1))
    {
        printf("\nNao entendi nenhum dos comandos. Reinicie e tente novamente.\n");
    }

    else
    {
        if (num1 > 3 || num1 < 1)
        {
            printf("\nNao entendi o comando do Jogador 1. Reinicie e tente novamente.\n");
        }
        
        if (num2 > 3 || num2 < 1)
        {
            printf("\nNao entendi o comando do Jogador 2. Reinicie e tente novamente.\n");
        }
    }

    printf("\n-------------------------------------------------------------------------\n");
    system("pause");
    return 0;
}
