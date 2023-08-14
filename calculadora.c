#include<stdio.h>
#include<stdlib.h>

int main(){
    int sair=0, opcao;
    int valor_a, valor_b;
    do {
        printf("Operacao\n1-Soma\n2-Subtracao\n3-Divisao\n4-Multiplicacao\n5-Sair:\n");
        scanf("%d", &opcao);
        printf("%d", opcao);
    }while(sair==0);
}