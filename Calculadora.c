#include <stdio.h>
#include <math.h>

int main(){

    int op, n, i;
    float a, b;
    printf("\n-------------------------------------------------------------------------\n");
    printf("1 - Soma/subtracao\n");
    printf("2 - Multiplicacao\n");
    printf("3 - Divisao\n");
    printf("4 - Media aritmetica\n");
    printf("5 - Potenciacao\n");
    printf("6 - Raiz quadrada\n");
    printf("7 - Fatorial\n");
    printf("8 - Equacao/funcao do 2 grau\n");
    printf("9 - Seno\n");
    printf("10 - Cosseno\n");
    printf("11 - Tangente\n");
    printf("12 - Logaritmo de base 10\n");
    printf("13 - Logaritmo natural\n");
    printf("\n0 - Sair\n");
    printf("-------------------------------------------------------------------------\n");
    printf("\nEscolha uma operacao:\n> ");
    scanf("%d", &op);
    printf("\n-------------------------------------------------------------------------\n");

    switch (op)
    {
    case 0:
    {
        printf("\nVoce saiu desta calculadora com sucesso.\n");
        break;
    }

    case 1:
    {
        float soma;
        printf("\nDigite a quantidade de termos:\n> ");
        scanf("%d", &n);
        printf("\n");
        float v[n];
        for(i = 0; i < n; i++){
            printf("Digite o %do termo:\n> ", i + 1);
            scanf("%f", &v[i]);
        }

        for(i = 0; i < n; i++){
            soma += v[i];
        }

        if (v[0] >= 0)
        {
            printf("\n\t%.2f", v[0]);
        }

        else
        {
            printf("\n\t- %.2f", v[0] * -1);
        }
        
        for(i = 1; i < n; i++){
            if (v[i] >= 0)
            {
                printf(" + %.2f", v[i]);
            }

            else
            {
                printf(" - %.2f", v[i] * -1);
            }
        }

        printf("\n\n\t= %.2f\n", soma);
        break;

    }

    case 2:
    {
        float mult = 1;
        printf("\nDigite a quantidade de termos:\n> ");
        scanf("%d", &n);
        printf("\n");
        float v[n];
        for(i = 0; i < n; i++){
            printf("Digite o %do termo:\n> ", i + 1);
            scanf("%f", &v[i]);
        }

        for(i = 0; i < n; i++){
            mult *= v[i];
        }

        printf("\n\t%.2f", v[0]);
        for(i = 1; i < n; i++){
            if (v[i] >= 0)
            {
                printf(" x %.2f", v[i]);
            }

            else
            {
                printf(" x (%.2f)", v[i]);
            }
        }

        printf("\n\n\t= %.2f\n", mult);
        break;
    }

    case 3:
    {
        int c;
        printf("\n1 - Divisao sem resto\n");
        printf("2 - Divisao com resto\n\n> ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
        {
            printf("Escolha um valor para A:\n> ");
            scanf("%f", &a);
            printf("Escolha um valor para B:\n> ");
            scanf("%f", &b);
            if (b != 0)
            {
                printf("\n%.2f / %.2f = %.2f.\n", a, b, a / b);
            }

            else
            {
                printf("\nImpossivel dividir por zero.\n");
            }
            
            break;
        }

        case 2:
        {
            int a, b;
            printf("Escolha um valor inteiro para A:\n> ");
            scanf("%d", &a);
            printf("Escolha um valor inteiro para B:\n> ");                
            scanf("%d", &b);
            if (b != 0)
            {
                printf("\n%d / %d = %d.\n", a, b, a / b);
                printf("Resto = %d.\n", a % b);
            }

            else
            {
                printf("\nImpossivel dividir por zero.\n");
            }

            break;

        }
        
        default:
        {
            printf("\nNao entendi o seu comando. Reinicie esta calculadora e tente novamente.\n");
            break;
        }

        }

        break;
    }

    case 4:
    {
        float m;
        printf("\nDigite a quantidade de termos da media:\n> ");
        scanf("%d", &n);
        printf("\n");
        float v[n];

        for(i = 0; i < n; i++){
            printf("Digite o %do termo:\n> ", i + 1);
            scanf("%f", &v[i]);
        }

        for(i = 0; i < n; i++){
            m += v[i];
        }

        printf("\nMedia = %.2f\n", m / n);
        break;
    }

    case 5:
    {
        printf("\nEscolha um valor para A:\n> ");
        scanf("%f", &a);
        printf("Escolha um valor para o expoente B do numero escolhido:\n> ");
        scanf("%f", &b);
        printf("\n%.2f^%.2f = %.2f.\n", a, b, pow(a, b));
        break;
    }

    case 6:
    {
        printf("\nEscolha um valor para A:\n> ");
        scanf("%f", &a);
        if (a >= 0)
        {
            printf("\nA raiz quadrada de %.2f vale %.2f.\n", a, sqrt(a));
        }

        else
        {
            printf("\nImpossivel tirar a raiz quadrada de um numero negativo.\n");
        }
        
        break;
    }
    
    case 7:
    {
        int n, i, fat;
        printf("\nDigite o numero que voce deseja saber o fatorial:\n> ");
        scanf("%d", &n);
        fat = n;
        for (i = n - 1; i > 1; i--){
            fat = fat * i;
        }
        
        printf("\n%d! = %d\n", n, fat);
        break;
    }
    
    case 8:
    {
        int a, b, c, delta;
        float xv, yv;
	    printf("\nDigite o valor de A:\n> ");
	    scanf("%d", &a);
	    printf("Digite o valor de B:\n> ");
	    scanf("%d", &b);
	    printf("Digite o valor de C:\n> ");
	    scanf("%d", &c);
        printf("\n-------------------------------------------------------------------------\n");
	    delta = b * b - 4 * a * c;
        xv = -b / (2 * a);
        yv = -delta / (4 * a);

        if (delta >= 0)
        {
            if (delta > 0)
            {
                float raiz_delta = sqrt(delta), x1, x2;
	            x1 = (-b + raiz_delta) / (2 * a);
	            x2 = (-b - raiz_delta) / (2 * a);
	            printf("\nDelta = %d.\n", delta);
	            printf("Para Delta positivo, raizes diferentes:\n");
	            printf("x1 = %.2f.\n", x1);
	            printf("x2 = %.2f.\n", x2);
            }

            else
            {
                float x;
	            x = -b / (2 * a);
	            printf("\nDelta = 0.\n");
	            printf("Para Delta igual a 0, somente uma raiz:\nx = %.2f.\n", x);
            }
	
        }
        
        else
        {
            printf("\nDelta = %d.\n", delta);
            printf("Para Delta negativo, nao existem raizes em numeros reais.\n");
        }

        printf("\nxv = %.2f\n", xv);
        printf("yv = %.2f\n", yv);
        break;
    }
    
    case 9:
    {
        float rad;
        printf("\n\n\tTABELA DOS SENOS:\n");
        printf("\n\tsen 30 = 1 / 2\n");
        printf("\tsen 45 = (raiz de 2) / 2\n");
        printf("\tsen 60 = (raiz de 3) / 2\n");
        printf("\tsen 90 = 1\n");
        printf("\n\n\nEscolha um valor (em graus):\n> ");
        scanf("%f", &a);
        rad = a * 3.14 / 180;
        printf("\nsen %.1f = %.4f.\n", a, sin(rad));
        break;
    }
    
    case 10:
    {
        float rad;
        printf("\n\n\tTABELA DOS COSSENOS:\n");
        printf("\n\tcos 30 = (raiz de 3) / 2\n");
        printf("\tcos 45 = (raiz de 2) / 2\n");
        printf("\tcos 60 = 1 / 2\n");
        printf("\tcos 90 = 0\n");
        printf("\n\n\nEscolha um valor (em graus):\n> ");
        scanf("%f", &a);
        rad = a * 3.14 / 180;
        printf("\ncos %.1f = %.4f.\n", a, cos(rad));
        break;
    }

    case 11:
    {
        float rad;
        printf("\n\n\tTABELA DAS TANGENTES:\n");
        printf("\n\ttg 30 = (raiz de 3) / 3\n");
        printf("\ttg 45 = 1\n");
        printf("\ttg 60 = raiz de 3\n");
        printf("\ttg 90 = nao existe\n");
        printf("\n\n\nEscolha um valor (em graus):\n> ");
        scanf("%f", &a);
        rad = a * 3.14 / 180;
        printf("\ntg %.1f = %.4f.\n", a, tan(rad));
        break;
    }

    case 12:
    {
        printf("\nEscolha um valor:\n> ");
        scanf("%f", &a);
        printf("\nO log de %.0f na base 10 vale %.2f.\n", a, log10(a));
        break;
    }

    case 13:
    {
        printf("\nEscolha um valor:\n> ");
        scanf("%f", &a);
        printf("\nO log natural de %.0f vale %.2f.\n", a, log(a));
        break;
    }

    default:
    {
        printf("\nComando invalido. Reinicie esta calculadora e tente novamente.\n");
        break;
    }

    }

    printf("\n-------------------------------------------------------------------------\n");
    return 0;
}
