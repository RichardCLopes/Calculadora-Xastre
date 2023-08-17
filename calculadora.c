#include<stdio.h>
#include<stdlib.h>

int main(){
    int sair=0, opcao;
    float valor_a, valor_b, resposta;
    do {
        printf("\nOperacao\n1-Soma\n2-Subtracao\n3-Divisao\n4-Multiplicacao\n5-Sair:");
        scanf("%d", &opcao);
        if (opcao == 5)
        break ;
        printf("Numero 1 :");
        scanf("%f", &valor_a);
        printf("Numero 2 :");
        scanf("%f", &valor_b);
        switch (opcao)
            {
            case 1:
            resposta = valor_a + valor_b;
            printf("\nSoma = %.2f\n", resposta);
                break;
            case 2:
            resposta = valor_a - valor_b;
            printf("\nSubtracao = %.2f\n", resposta);
                break;
            case 3:
            resposta = valor_a / valor_b;
            printf("\nDivisao = %.2f\n", resposta);
                break;
            case 4:
            resposta = valor_a * valor_b;
            printf("\nMultiplicacao = %.2f\n", resposta);
            break;
            default:
                break;
            }
        
    }while(opcao!=5);
}
